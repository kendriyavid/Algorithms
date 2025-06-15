#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        // Strategy 1: Try cooking A first
        ll temp1 = k, total1 = 0;
        if (temp1 >= a) {
            ll cntA = 1 + (temp1 - a) / x;
            temp1 -= cntA * x;
            total1 += cntA;
        }
        if (temp1 >= b) {
            ll cntB = 1 + (temp1 - b) / y;
            total1 += cntB;
        }

        // Strategy 2: Try cooking B first
        ll temp2 = k, total2 = 0;
        if (temp2 >= b) {
            ll cntB = 1 + (temp2 - b) / y;
            temp2 -= cntB * y;
            total2 += cntB;
        }
        if (temp2 >= a) {
            ll cntA = 1 + (temp2 - a) / x;
            total2 += cntA;
        }

        cout << max(total1, total2) << '\n';
    }
    return 0;
}
