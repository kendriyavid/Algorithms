#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        int max_val = INT_MIN;

        // Read matrix and find max value
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
                max_val = max(max_val, mat[i][j]);
            }
        }

        // Collect positions of max_val
        vector<pair<int, int>> max_positions;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == max_val) {
                    max_positions.emplace_back(i, j);
                }
            }
        }

        int result = INT_MAX;

        for (const auto& pos : max_positions) {
            int x = pos.first, y = pos.second;
            mat[x][y]--;  // simulate operation

            int curr_max = INT_MIN;
            for (const auto& row : mat) {
                for (int val : row) {
                    curr_max = max(curr_max, val);
                }
            }

            result = min(result, curr_max);
            mat[x][y]++;  // revert operation
        }

        cout << result << '\n';
    }
    return 0;
}
