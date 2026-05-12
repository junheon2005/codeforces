#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
#define int long long
 
signed main() {
    
    int n, x;
    cin >> n >> x;
 
    vector<int> c(n);
 
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
 
    sort(c.begin(), c.end());
 
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        ans = ans + c[i] * x;
 
        if (x > 1) x--;
        
    }
 
    cout << ans;
}