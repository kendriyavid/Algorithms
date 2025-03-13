#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main() {
    int n, k;
    cin >> k >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[vec[i]]++;
    }

    vector<pair<int, int>> rvec;
    for (auto &it : mp) {
        rvec.emplace_back(it.first, it.second);
    }

    sort(rvec.begin(), rvec.end(), comparator); 
    
    for (int i = 0; i < min(k, (int)rvec.size()); i++) {
        cout << rvec[i].first << " " << rvec[i].second << endl;
    }

    return 0;
}
