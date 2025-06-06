// // // prime

// // #include <bits/stdc++.h>
// // using namespace std;

// // bool isPrime(int num){
// //     for(int i=2;i*i<=num;i++){
// //         if(num%i==0){
// //             return false;
// //         }
// //     }
// //     return true;
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     cout<<isPrime(n);
// //     return 0;
// // }

// // sieve

// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     vector<int> vec(n,1);
//     vec[0]=0;
//     vec[1]=0;
//     for(int i=0;i*i<=n;i++){
//         if(vec[i]==1){
//             for(int j=i;j<=n;j+vec[i]){
//                 vec[j]=0;
//             }
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// bool checkPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int n;
//     cin>>n;
//     cout<<checkPrime(n);
//     return 0;
// }

// prime factorization
// uses the divisor pairs so do till sqrt(n)

// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     map<int,int> mp;
//     for(int i=2;i*i<=n;i++){
//         int count=0;
//         if(n%i==0){
//             while(n%i==0){
//                 count++;
//                 n = n/i;
//             }
//             mp[i] =count;
//         }   
//     }
//     if(n!=0){
//         mp[n]++;
//     }

//     for(auto &i:mp){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }


// sieve of erethnoses
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     vector<int> vec(n,1);
//     for(int i=2;i*i<=n;i++){
//         if(vec[i]==1){
//             for(int j=i;j<=n;j+=i){
//                 vec[j]=0;
//             }
//         }
//     }
//     return 0;
// }


// binary exponentiation


// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int power,base;
//     cin>>power>>base;
//     int result=1;
//     while(power!=0){
//         if(power%2!=0){
//             result*=base;
//             power-=1;
//         }
//         else{
//             base*=base;
//             power/=2;
//         }
//     }
//     cout<<result;
//     return 0;
// }

// gcd calculation

// #include <bits/stdc++.h>
// using namespace std;

// enum Flags{
// 	RED,
// 	GREEN,
// 	YELLOW
// };

// int main(){
//     int col = RED;
//     cout<<col;
//     return 0;
// }


// euclid division algorithm gcd calculation

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}