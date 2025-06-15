#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        // Precompute targets like 1, 3, 7, 15, 31...
        vector<int> targets;
        for (int i = 1;; i++) {
            int val = (1 << i) - 1;
            if (val > 1e9) break;
            targets.push_back(val);
        }

        vector<tuple<int, int, int>> ops;
        for (int x : vec) {
            auto lb = lower_bound(targets.begin(), targets.end(), x);
            int tgt = *lb;
            int cost = tgt - x;
            ops.emplace_back(cost, x, tgt);
        }

        sort(ops.begin(), ops.end());

        int total_beauty = 0;
        for (auto &t : ops) {
            int cost = get<0>(t);
            int orig = get<1>(t);
            int final = get<2>(t);

            if (k >= cost) {
                k -= cost;
                total_beauty += __builtin_popcountll(final);
            } else {
                total_beauty += __builtin_popcountll(orig);
            }
        }

        cout << total_beauty << '\n';
    }

    return 0;
}
