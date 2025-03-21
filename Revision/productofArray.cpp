#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0] = vec[0];
    suffix[n - 1] = vec[n - 1];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * vec[i];
    }
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * vec[i];
    }

    vector<int> result(n);
    result[0] = suffix[1];
    result[n - 1] = prefix[n - 2];
    for (int i = 1; i < n - 1; i++) {
        result[i] = prefix[i - 1] * suffix[i + 1];
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
