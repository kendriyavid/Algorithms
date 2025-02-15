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

//     int maxval=INT_MIN;
//     int minval = 0;
//     for(int i=0;i<n;i++){
//         maxval = max(maxval,vec[i]-minval);
//         minval = min(vec[i],minval);
//     }
//     cout<<maxval;
//     return 0;
// }

// another method

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     int maxval=INT_MIN;
//     int minval = 0;
//     int prefix=0;
//     for(int i=0;i<n;i++){
//         prefix+=vec[i];
//         maxval = max(maxval,prefix-minval);
//         minval = min(minval,prefix);
//     }
//     cout<<maxval<<endl;
//     return 0;
// }