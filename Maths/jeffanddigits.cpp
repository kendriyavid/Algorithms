#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    int count5 = 0, count0 = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] == 5) count5++;
        else if (vec[i] == 0) count0++;
    }

    if (count0 == 0) {
        // No 0 → can't form a number divisible by 10
        cout << -1 << endl;
        return 0;
    }

    // Find the max number of 5s divisible by 9
    int c5 = count5 - (count5 % 9);
    if (c5 == 0) {
        // Not enough 5s to be divisible by 9 → answer is 0
        cout << 0 << endl;
        return 0;
    }

    // Print c5 times 5 and rest 0s
    for (int i = 0; i < c5; i++) cout << 5;
    for (int i = 0; i < count0; i++) cout << 0;
    cout << endl;

    return 0;
}
