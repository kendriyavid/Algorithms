#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        vector<char> vec(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> vec[i]; // '>' or '<'
        }

        vector<int> result(n);
        int l = 1, r = n;
        for (int i = n - 2; i >= 0; i--) {
            if (vec[i] == '>') {
                result[i + 1] = r--;
            } else {
                result[i + 1] = l++;
            }
        }

        // Fill the remaining number in result[0]
        result[0] = l; // l and r are equal now

        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
