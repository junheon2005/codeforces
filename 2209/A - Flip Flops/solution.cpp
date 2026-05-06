#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
signed main() {
 
    int t, n, c, k;
    cin >> t;
 
 
    while (t--) {
        cin >> n >> c >> k;
        int arr[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            if (arr[i] < c) {
                int temp = c;
                if (k >= c - arr[i] && k > 0) {
                    c = c + c;
                    k = k - temp + arr[i];
                }
                else if (k < temp - arr[i] && k > 0){
                    c = c + arr[i] + k;
                    k = 0;
                }
                else {
                    c = c + arr[i];
                }
            }
            else if (arr[i] == c) c = c + c;
        }
        cout << c << "
";
    }
}