#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
#define int long long
 
int n, m;
int deg[200001];
vector<bool> visited;
vector<vector<int>> adj;
 
bool bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    bool check = true;
 
    while(!q.empty()){
        int cur = q.front();
        q.pop();
 
        if(deg[cur] != 2) check = false;
 
        for(auto next_node : adj[cur]){
            if(!visited[next_node]){
                visited[next_node] = true;
                q.push(next_node);
            }
        }
    }
 
    return check;
}
 
signed main() {
    cin >> n >> m;
    visited.resize(n + 1, false);
    adj.resize(n + 1);
 
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(bfs(i)) ans++;
        }
    }
    cout << ans;
 
    return 0;
}