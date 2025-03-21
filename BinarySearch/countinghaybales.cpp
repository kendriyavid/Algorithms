#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());

    while (q--) {
        int a, b;
        cin >> a >> b;

        int i2 = lower_bound(vec.begin(), vec.end(), a) - vec.begin();

        int i1 = upper_bound(vec.begin(), vec.end(), b) - vec.begin();
        i1--;  

        if (i2 >= n || vec[i2] < a) i2 = -1;  
        if (i1 < 0 || vec[i1] > b) i1 = -1;  

        cout << i1 << " " << i2 << endl;

        if (i1 == -1 || i2 == -1 || i1 < i2) {
            cout << 0 << endl; 
        } else {
            cout << (i1 - i2 + 1) << endl;
        }
    }
    return 0;
}
