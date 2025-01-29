#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    map<int, int> mp;
    mp[0] = 1; // To handle the case when a prefix sum itself equals x
    int prefixSum = 0, tc = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += vec[i];

        if (mp.find(prefixSum - x) != mp.end()) {
            tc += mp[prefixSum - x];
        }
        
        mp[prefixSum]++; // Store occurrences of prefix sums
    }

    cout << tc << endl;
    return 0;
}
