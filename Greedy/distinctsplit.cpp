#include <bits/stdc++.h>
using namespace std;

int scoreFinder(const string& s) {
    unordered_set<char> seti(s.begin(), s.end());
    return seti.size();
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int position = n;  // Assume no duplicate
        unordered_set<char> seti;
        int s1 = 0;
        for (int i = 0; i < n; i++) {
            if (seti.find(s[i]) != seti.end()) {
                position = i;
                s1 = seti.size();
                break;
            }
            seti.insert(s[i]);
        }

        // If no repetition, s1 is seti.size()
        if (position == n) s1 = seti.size();

        // calculating score
        cout << s1 + scoreFinder(s.substr(position)) << endl;
    }
    return 0;
}
