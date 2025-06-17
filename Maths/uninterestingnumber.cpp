// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int diff = 9- (n%9);
//         cout<<diff<<endl;
//         if(n%9==0){
//             cout<<"YES"<<endl;
//             return 0;
//         }
//         if(diff%2==0){
//             int times = diff/2;
//             int count=0;
//             while(n>0){
//                 cout<<n%10<<" "<<n/10<<endl;
//                 if(n%10==2){
//                     count++;
//                 }
//                 n=n/10;
//             }
//             if(count>=times){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;
//             }
//         }else if(diff%6==0){
//             int times = diff/6;
//             int count=0;
//             while(n>0){
//                 if(n%10==3){
//                     count++;
//                 }
//                 n=n/10;
//             }
//             if(count>=times){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;}
//         }else if(diff%8==0){
//             int times = diff/2;
//             int count2=0;
//             int count3=0;
//             while(n>0){
//                 if(n%10==2){
//                     count2++;
//                 }else if(n%10==3){
//                     count3++;
//                 }
//                 n=n/10;
//             }
//             if(count2>=times && count3>=times){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;
//             }
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int sum = 0, count2 = 0, count3 = 0;

    for (char c : s) {
        int digit = c - '0';
        sum += digit;
        if (digit == 2) count2++;
        else if (digit == 3) count3++;
    }

    for (int i = 0; i <= min(10, count2); ++i) {
        for (int j = 0; j <= min(10, count3); ++j) {
            if ((sum + i * 2 + j * 6) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
