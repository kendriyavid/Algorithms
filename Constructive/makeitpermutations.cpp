#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count=0;
        int l = n;
        int left=1;
        int right=n;
        int depth=2;
        while(l>1){
            cout<<depth<<" "<<1<<" "<<l<<endl;
            if(n-l>0){
                cout<<depth<<" "<<n-l+1<<" "<<n<<endl;
            }
            depth++;
            l--;
        }
        cout<<count<<endl;
    }

    return 0;
}
