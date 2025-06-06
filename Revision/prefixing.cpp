// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n,q;
//     cin>>n>>q;
//     // inputting
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//         cout<<vec[i]<<endl;
//     }
//     // prefixing
//     for(int i=1;i<n;i++){
//         vec[i]+=vec[i-1];
//     }
//     while(q--){
//         cout<<"inside this"<<endl;
//         int l,r;
//         cin>>l>>r;
//         int result = vec[r];
//         cout<<result<<endl;
//         if(l>0){
//             result-=vec[l-1];
//         }
//         cout<<result;
//     }
//     return 0;
// }

// subsequences summing to 7
// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }

//     // prefixing
//     for(int i=1;i<n;i++){
//         vec[i]+=vec[i-1];
//     }

//     // hashing
//     unordered_map<int,int> mp;
//     mp[0] = 0;
//     int maxl=0;
//     for(int i=0;i<n;i++){
//         int rem = vec[i]%7;
//         if(mp.find(rem)!=mp.end()){
//             maxl = max(maxl,i-mp[rem]+1);
//         }
//         mp[rem]=i;
//     }
//     cout<<maxl;
//     return 0;
// }

// good subarrays
#include <bits/stdc++.h>
using namespace std;

int main(){

    int cases;
    cin>>cases;
    while(cases--){
        cout<<"inside loop"<<endl;
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        // subtracting
        for(int i=0;i<n;i++){
            vec[i]-=1;
        }

        // prefixing
        for(int i=1;i<n;i++){
            vec[i]+=vec[i-1];
        }

        map<int,int> mp;
        int total=0;
        for(int i=0;i<n;i++){
            if(mp.find(vec[i])!=mp.end()){
                total+=mp[vec[i]];
            }
            mp[vec[i]]++;
        }
        cout<<total<<endl;

    }
    return 0;
}