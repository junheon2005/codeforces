#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int t;
int n, m;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<int> a(n), b(m);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
 
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
 
        bool check = (n >= 2 * m);
        for(int j = 0; check && j < m; j++) {
            if(a[j] >= b[j] || a[n - 1 - j] <= b[m - 1 - j]) check = false;
        }
 
        if (check) cout << "yes
";
        else cout << "no
";
    }
}