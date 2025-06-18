#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = false; 
        string c = s;
        sort(c.begin(), c.end());
        int count = 0;
        for (int i = n-1; i>=0; i--) {
            if(c[i]!=s[i]){
                count++;
            }
            cout<<s[n-i-1]<<endl;
            if((count+1)/2<=k && s[n-i-1]<c[i]){
                    flag = true;
                    break;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
