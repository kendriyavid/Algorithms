// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<long long> vec(n);
//         for(int i = 0; i < n; i++) {
//             cin >> vec[i];
//         }

//         sort(vec.begin(), vec.end());

//         long long total = accumulate(vec.begin(), vec.end(), 0LL);
//         long long removed = 0;

//         int i=0;int j=n-1;
//         while(i<=j && k>0){
//             if(vec[i]+vec[i+1]<vec[j]){
//                 removed = removed+vec[i]+vec[i+1];
//                 i+=2;
//             }else{
//                 removed = removed+vec[j];
//                 j++;
//             }
//             k--;
//         }

//         cout << total-removed << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        // Prefix sum for first elements (for 2*x removals)
        vector<long long> prefix(n+1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i] + a[i];
        }

        long long maxSum = 0;

        for (int x = 0; x <= k; x++) {
            int remove2min = 2 * x;
            int removeMax = k - x;

            if (remove2min > n) continue;
            if (remove2min + removeMax > n) continue;

            long long currSum = prefix[n - removeMax] - prefix[remove2min];
            maxSum = max(maxSum, currSum);
        }

        cout << maxSum << '\n';
    }
}
