#include <bits/stdc++.h>
using namespace std;

// returning index
int validation(int i, int n){
    int before = i/n;
    return i-before;
}   
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int l = 1, r = 2e9; 
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            int number = mid - mid / n;

            if (number >= k) {
                if (number == k) ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
