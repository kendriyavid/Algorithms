// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     long long s;
//     cin>>n>>s;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     vector<int> prefix(n+1);
//     for(int i=1;i<=n;i++){
//         prefix[i] = prefix[i-1]+vec[i-1];
//     }
//     int j=0;
//     int count=0;
//     for(int i=1;i<=n;i++){
//         while(j<i && prefix[i]-prefix[j]>=s){
//             j++;
//         }
//         if(prefix[i]-prefix[j]<s){
//             count+=i-j;
//         }
//     }

//     // Total possible subarrays: n*(n+1)/2
//     long long total = (long long)n*(n+1)/2;
    
//     // Subarrays with sum >= s
//     cout<<total-count;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<long long> prefix(n+1);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+vec[i-1];
    }

    int j=0;
    long long count=0;

    for(int i=1;i<=n;i++){
        while(j<i && prefix[i]-prefix[j]>=s){
            j++;
            count += (n+1-i);
        }
    }
    cout<<count<<endl;
    return 0;
}