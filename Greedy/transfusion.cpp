#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long even_sum = 0, odd_sum = 0;
        int ec = 0, oc = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (i % 2 == 0) {
                even_sum += a[i];
                ec++;
            } else {
                odd_sum += a[i];
                oc++;
            }
        }

        if (even_sum % ec != 0 || odd_sum % oc != 0) {
            cout << "NO\n";
        } else if ((even_sum / ec) != (odd_sum / oc)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
