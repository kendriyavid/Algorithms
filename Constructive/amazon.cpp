// #include <iostream>
// #include <vector>
// #include <map>
// #include <tuple>
// #include <algorithm>
// #include <climits>

// using namespace std;

// map<tuple<int, int, int>, long long> memo;
// vector<int> cost;
// int pairCost;
// int maxK;

// long long dp(int left, int right, int used) {
//     if (left > right) return 0;
//     if (left == right) return cost[left];
    
//     auto key = make_tuple(left, right, used);
//     if (memo.find(key) != memo.end()) {
//         return memo[key];
//     }
    
//     long long result = LLONG_MAX;
    
//     result = min(result, (long long)cost[left] + dp(left + 1, right, used));
//     result = min(result, (long long)cost[right] + dp(left, right - 1, used));
    
//     if (used < maxK) {
//         result = min(result, (long long)pairCost + dp(left + 1, right - 1, used + 1));
//     }
    
//     memo[key] = result;
//     return result;
// }

// long long findMinPrice(vector<int>& bookCosts, int pairCostValue, int k) {
//     if (bookCosts.empty()) return 0;
//     if (bookCosts.size() == 1) return bookCosts[0];
    
//     cost = bookCosts;
//     pairCost = pairCostValue;
//     maxK = k;
//     memo.clear();
    
//     return dp(0, cost.size() - 1, 0);
// }

// int main() {
//     vector<int> costs = {9, 11,13,15,17};
//     int pairCostValue = 6;
//     int k = 2;
    
//     cout << findMinPrice(costs, pairCostValue, k) << endl;
    
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long findMinPrice(vector<int>& cost, int pairCost, int k) {
    int n = cost.size();
    if (n == 0) return 0;
    if (n == 1) return cost[0];
    
    // dp[i][j][used] = min cost to buy books from index i to j using 'used' pair operations
    vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(k + 1, LLONG_MAX)));
    
    // Base case: single books
    for (int i = 0; i < n; i++) {
        for (int used = 0; used <= k; used++) {
            dp[i][i][used] = cost[i];
        }
    }
    
    // Fill for all lengths from 2 to n
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            
            for (int used = 0; used <= k; used++) {
                // Option 1: Buy leftmost book individually
                if (dp[i + 1][j][used] != LLONG_MAX) {
                    dp[i][j][used] = min(dp[i][j][used], cost[i] + dp[i + 1][j][used]);
                }
                
                // Option 2: Buy rightmost book individually
                if (dp[i][j - 1][used] != LLONG_MAX) {
                    dp[i][j][used] = min(dp[i][j][used], cost[j] + dp[i][j - 1][used]);
                }
                
                // Option 3: Buy both leftmost and rightmost together
                if (used > 0) {
                    if (len == 2) {
                        dp[i][j][used] = min(dp[i][j][used], (long long)pairCost);
                    } else if (dp[i + 1][j - 1][used - 1] != LLONG_MAX) {
                        dp[i][j][used] = min(dp[i][j][used], pairCost + dp[i + 1][j - 1][used - 1]);
                    }
                }
            }
        }
    }
    
    long long result = LLONG_MAX;
    for (int used = 0; used <= k; used++) {
        result = min(result, dp[0][n - 1][used]);
    }
    
    return result;
}

int main() {
    vector<int> costs = {9, 11, 13,15,17};
    int pairCostValue = 6;
    int k = 2;
    
    cout << findMinPrice(costs, pairCostValue, k) << endl;
    
    return 0;
}