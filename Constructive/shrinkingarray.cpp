#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
                if (n == 2) {
            cout << -1 << endl;
            continue;
        } 
                bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) <= 1) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << 0 << endl;
        }else {
            cout << 1 << endl;
        }
    }

    return 0;
}
