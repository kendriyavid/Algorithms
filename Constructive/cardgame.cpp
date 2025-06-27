// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int a1,a2,b1,b2;
//         cin>>a1>>a2>>b1>>b2;

//         if(a1>b1 && a1>b2 && a2>b1 && a2>b2){
//             cout<<4<<endl;
//         }else if((a1>b1 && a2>b2)||(a1>b2 && a2>b1)||((a1<b1||a1<b2) && (a1>b2||a1>b1) && a2>b1 && a2>b2)||(a1>b1 && a1>b2 && (a2<b1||a2<b2) && (a2>b2||a2>b1))){
//             cout<<2<<endl;
//         }else{cout<<0<<endl;}
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        vector<int> A = {a1, a2};
        vector<int> B = {b1, b2};
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if (A[0] > B[1]) {
            cout << 4 << endl;
        } else if (A[1] > B[1]) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
