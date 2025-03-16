// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     long long target;
//     cin >> n >> target;
//     vector<long long> vec(n);
//     for(int i = 0; i < n; i++){
//         cin >> vec[i];
//     }

//     // prefixing
//     vector<long long> prefix(n + 1);
//     for(int i = 1; i <= n; i++){
//         prefix[i] = vec[i - 1] + prefix[i - 1];
//     }

//     int j = 0;
//     int maxl = 0;
//     for(int i = 1; i <= n; i++){ 
//         while(i > j && prefix[i] - prefix[j] > target){
//             j++;
//         }
//         // measure
//         if(prefix[i] - prefix[j] <= target){
//             maxl = max(maxl, i - j);
//         }
//     }
//     cout << maxl;
//     return 0;
// }


// SLIDING WINDOW APPROACH


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int long long target;
    cin>>n>>target;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int maxl=0;
    int j=0;
    long long csum=0;
    for(int i=0;i<=n;i++){
        csum+=vec[i];
        while(i>j && csum>target){
            csum-=vec[j];
            j++;
        }
        if(csum<=target){
            maxl = max(maxl,i-j+1);
        }
    }

    cout<<maxl;
    return 0;
}