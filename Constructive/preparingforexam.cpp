// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int n,m,k;
//         cin>>n>>m>>k;
//         vector<int> qp(m);
//         vector<int> ans(k);
//         for(int i=0;i<m;i++){
//             cin>>qp[i];
//         }
//         for(int i=0;i<k;i++){
//             cin>>ans[i];
//         }

//         int qtotal = n * (n + 1) / 2;
//         int anstotal = 0;
//         for(int x:ans){
//             anstotal+=x;
//         }

//         if(qtotal==anstotal){
//             cout << string(n, '1') << endl;
//             continue;
//         }

//         for(int x:qp){
//             if(((qtotal-x) == anstotal)){
//                 cout<<1;
//             }else{
//                 cout<<0;
//             }
//         }

//         cout<<endl;
//     }
//     return 0;
// }


// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,m,k;
// //         cin>>n>>m>>k;
// //         vector<int> qp(m);
// //         vector<int> ans(k);
// //         for(int i=0;i<m;i++){
// //             cin>>qp[i];
// //         }
// //         for(int i=0;i<k;i++){
// //             cin>>ans[i];
// //         }
// //         vector<bool> ansstatus(n,false);
// //         for(int x:ans){
// //             ansstatus[x] = true;
// //         }
// //         for(int x:qp){
// //             if( k==n || ( k==n-1 && ansstatus[x]!=true)){
// //                 cout<<"1";
// //             }else{
// //                 cout<<"0";
// //             }
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }


#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> qp(m);
        vector<int> ans(k);
        for (int i = 0; i < m; i++) {
            cin >> qp[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> ans[i];
        }

        // Track which positions are already correct
        vector<bool> vis(n + 1, false);
        for (int x : ans) {
            if (x <= n)
                vis[x] = true;
        }

        // If already complete
        if (k == n) {
            cout << string(n, '1') << endl;
            continue;
        }

        for (int x : qp) {
            if (x <= n && !vis[x] && k == n - 1) {
                cout << '1';
            } else {
                cout << '0';
            }
        }

        cout << endl;
    }

    return 0;
}
