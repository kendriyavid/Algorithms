// #include <bits/stdc++.h>
// using namespace std;

// void subsetsum(vector<vector<int>> &result, vector<int> &vec, vector<int> &mid, int index, int sum, int k) {
//     if (sum > k) return;  // Stop if sum exceeds k
//     if (sum == k) {
//         result.emplace_back(mid);
//         return;
//     }

//     for (int i = index; i < vec.size(); i++) {  // Start from 'index' to allow repetition
//         mid.emplace_back(vec[i]);
//         subsetsum(result, vec, mid, i, sum + vec[i], k);  // NOT 'index', use 'i' to allow repetition
//         mid.pop_back();  // Backtrack
//     }
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }

//     vector<vector<int>> result;
//     vector<int> mid;
//     subsetsum(result, vec, mid, 0, 0, k);

//     for (auto &v : result) {
//         for (int val : v) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
};
int main() {
  Solution obj;
  vector < int > v {1,2,1};
  int target = 2;

  vector < vector < int >> ans = obj.combinationSum(v, target);
  cout << "Combinations are: " << endl;
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }
}