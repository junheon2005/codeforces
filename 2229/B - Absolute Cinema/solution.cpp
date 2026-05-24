#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
 
signed main() {
    int t;
    cin >> t;
    while (t--) {
 
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int mx = 0;
        bool flag = false;
        int pos;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
 
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + max(a[i], b[i]);
            mx = max(mx, min(a[i], b[i]));
 
        }
        cout << sum + mx << "
";
 
 
 
 
    }
 
}