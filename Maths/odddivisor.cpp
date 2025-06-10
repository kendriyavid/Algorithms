// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         bool flag = false;
//         if(n%2!=0){
//             cout<<"yes"<<endl;
//             continue;
//         }

//         for(long long i=1;i*i<=n;i++){
//             if(n%i==0){
//                 long long b = n/i;
//                 if(b%2!=0 && b!=1){
//                     flag=true;
//                     break;
//                 }
//                 if(i%2!=0 && i!=1){
//                     flag=true;break;
//                 }
//             }
//         }

//         if(flag){
//             cout<<"yes"<<endl;
//         }else{
//             cout<<"no"<<endl;
//         }
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){


//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         if(n%2!=0){
//             cout<<"yes"<<endl;
//             continue;
//         }

//         while(n!=0){
//             if(n%2!=0){
//                 cout<<"yes"<<endl;
//                 continue;
//             }
//             n/=2;
//         }
//         cout<<"yes"<<endl;

//     }

// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
        
//         if(n % 2 != 0){
//             cout << "yes" << endl;
//             continue;
//         }
        
//         while(n % 2 == 0 && n != 0){
//             n /= 2;
//         }
        
//         if(n != 0){
//             cout << "yes" << endl;
//         } else {
//             cout << "no" << endl;
//         }
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        // Remove all factors of 2
        while(n % 2 == 0){
            n /= 2;
        }
        
        // If what remains is greater than 1, then n has an odd divisor
        if(n > 1){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}


