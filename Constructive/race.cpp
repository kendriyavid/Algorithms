// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int a,x,y;
//         cin>>a>>x>>y;
//         int disa1 = abs(x-a);
//         int disa2 = abs(y-a);
//         int half = abs((x-y)/2);

//         if(min(disa1,disa2)>max(half,abs(x-half))){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        int dx = abs(a - x);
        int dy = abs(a - y);
        bool ok = false;

        for (int b = 1; b <= 100; ++b) {
            if (b == a) continue;
            if (abs(b - x) < dx && abs(b - y) < dy) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
