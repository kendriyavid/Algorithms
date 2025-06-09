// #include <bits/stdc++.h>
// using namespace std;

// bool primeCheck(int x){
//     if(x<2){
//         return false;
//     }
//     for(int i=2;i*i<=x;i++){
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,k;
//         cin>>x>>k;
//         if(k>1 && x==1){
//             cout<<"yes"<<endl;
//         }else if(k>1){
//             cout<<"no"<<endl;
//         }else if (primeCheck(x)){
//             cout<<"yes"<<endl;
//         }else{
//             cout<<"no"<<endl;
//         }

//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;

        if (k ==2 && x == 1) {
            cout << "yes" << endl;
        } else if (k > 1) {
            cout << "no" << endl;
        } else if (isPrime(x)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
