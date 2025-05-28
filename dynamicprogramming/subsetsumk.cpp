#include <bits/stdc++.h>
using namespace std;

bool subset(int sum, int curr, vector<vector<int>> &dp, int i, int n, vector<int> &vec){
    if (i > n || curr > sum) return false;
    if (curr == sum) return true;

    // Memoization check
    if (dp[curr][i] != -1) return dp[curr][i];

    // Not pick
    bool left = subset(sum, curr, dp, i + 1, n, vec);

    // Pick
    bool right = false;
    if (curr + vec[i - 1] <= sum) {
        right = subset(sum, curr + vec[i - 1], dp, i + 1, n, vec);
    }

    return dp[curr][i] = left || right;
}

int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Initialize DP table with -1 (for memoization)
    vector<vector<int>> dp(sum + 1, vector<int>(n + 1, -1));

    cout << (subset(sum, 0, dp, 1, n, vec) ? "YES" : "NO") << endl;

    return 0;
}
