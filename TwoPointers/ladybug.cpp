// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string a, b;
//         cin >> a >> b;

//         bool hasSharedOne = false;
//         for(int i = 0; i < n; ++i){
//             if(a[i] == '1' && b[i] == '1'){
//                 hasSharedOne = true;
//                 break;
//             }
//         }

//         if(hasSharedOne || a.find('1') == string::npos){
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
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
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;

        int s1counteven = 0, s1countodd = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s1[i] == '1') s1countodd++;
            } else {
                if(s1[i] == '1') s1counteven++;
            }
        }

        int s2counteven = 0, s2countodd = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s2[i] == '0') s2countodd++;
            } else {
                if(s2[i] == '0') s2counteven++;
            }
        }

        if(s1counteven <= s2countodd && s1countodd <= s2counteven){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
