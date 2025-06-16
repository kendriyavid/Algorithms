#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long dx = abs(x1 - x2);
        long long dy = abs(y1 - y2);

        if (dx < a || dy < b) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}
