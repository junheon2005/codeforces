#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n), b(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
 
    string ansA(n, '0');
    string ansB(n, '0');
 
    int half = n / 2;
 
    for (int i = 0; i < half; i++) {
        ansA[i] = '1';
        ansB[i] = '1';
    }
 
    int i = 0, j = 0;
 
    for (int k = 0; k < n; k++) {
        if (j == n || (i < n && a[i] < b[j])) {
            ansA[i] = '1';
            i++;
        }
        else {
            ansB[j] = '1';
            j++;
        }
    }
 
    cout << ansA << '
' << ansB;
 
}