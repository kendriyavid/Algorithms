#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < n; i++) {
        string intermediate = vec[i];
        mp[intermediate].emplace_back(vec[i]);
    }

    vector<vector<string>> result;
    for (auto &it : mp) {
        result.emplace_back(it.second); 
    }

    for (auto &group : result) {
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
