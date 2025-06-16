#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec1(n), vec2(n);
        for(int i = 0; i < n; i++) cin >> vec1[i];
        for(int i = 0; i < n; i++) cin >> vec2[i];

        vector<int> vec;  // dynamic result vector
        int j = 0, k = 0;
        int prev = -1;

        while (j < n || k < n) {
            if (j < n && vec1[j] == prev) {
                vec.push_back(vec1[j]);
                prev = vec1[j];
                j++;
            } else if (k < n) {
                vec.push_back(vec2[k]);
                prev = vec2[k];
                k++;
            } else if (j < n) {
                vec.push_back(vec1[j]);
                prev = vec1[j];
                j++;
            }
        }

        int maxStreak = 1, count = 1;
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] == vec[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            maxStreak = max(maxStreak, count);
        }

        cout << maxStreak << endl;
    }
    return 0;
}
