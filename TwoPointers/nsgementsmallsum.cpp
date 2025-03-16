#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long target;
    cin >> target;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + vec[i - 1];
    }

    int count = 0;
    int j = 0;
    for (int i = 1; i <= n; i++) {
        while (j < i && prefix[i] - prefix[j] > target) {
            j++;
        }
        count += (i - j);
    }

    cout << count;
    return 0;
}
