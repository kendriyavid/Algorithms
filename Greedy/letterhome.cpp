#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int left=0;
        int right=0;
        if(s>=vec[0]){
            left = abs(s - vec[0]);
        }
        if(s<=vec[n-1]){
            right = abs(vec[n-1] - s);
        }
        // cout<<left<<" "<<right<<endl;

        // }else{
        //     cout<<abs(s-vec[0])<<endl;
        //     continue;
        // }

        if (left > right) {
            cout << 2 * right + left << endl;
        } else {
            cout << 2 * left + right << endl;
        }
    }
    return 0;
}
