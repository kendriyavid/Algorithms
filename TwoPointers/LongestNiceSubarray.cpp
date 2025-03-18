#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int bitset = 0;
    int maxl = 1;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < i && (bitset & vec[i]) != 0) {
            bitset ^= vec[j]; // Remove element
            j++;
        }
        
        bitset |= vec[i]; // Add element using OR
        maxl = max(maxl, i - j + 1);
    }

    cout << maxl << endl;
    return 0;
}
