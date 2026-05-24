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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        vector<int> k;
 
        int flip = 0;
        for (int i = n; i >= 1; i--) {
            int cur;
            if (flip % 2 == 0) cur = v[i];
            else cur = -v[i];
            if (cur > 0) {
                k.push_back(i);
                flip++;
            }
        }
        cout << k.size() << "
";
        for (int i = 0; i < k.size(); i++) {
            cout << k[i] << " ";
        }
        cout << "
";
 
    }
 
}