#include <iostream>
#include <vector>
using namespace std;
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int N = 2 * n;
        vector<int> a(N+1), first(n+1, 0), match(N+1, 0);
        for(int i = 1; i <= N; i++){
            cin >> a[i];
            if(first[a[i]]) match[i] = first[a[i]];
            else first[a[i]] = i;
        }
        vector<int> dp(N+1, 0);
        for(int i = 1; i <= N; i++){
            dp[i] = dp[i-1] + 1;
            if(match[i]){
                int len = i - match[i] + 1;
                dp[i] = max(dp[i], dp[match[i]-1] + len*len);
            }
        }
        cout << dp[N] << '
';
    }
    return 0;
}