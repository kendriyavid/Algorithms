#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n>>x;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];

        map<int, int> first_index; // mod value -> first index
        int sum = 0;
        int minlen = INT_MAX;
        int findex,lindex=0;
        first_index[0] = -1; // Important: sum=0 at index -1

        for(int i = 0; i < n; i++){
            sum += vec[i];
            int mod = sum % x;
            if(mod < 0) mod += 7;

            if(first_index.count(mod)){
                // maxlen = min(maxlen, i - first_index[mod]);
                if(minlen>i-first_index[mod]){
                    minlen = i-first_index[mod];
                    findex = first_index[mod];
                    lindex = i;
                }
            } else {
                first_index[mod] = i;
            }
        }
        cout<<minlen<<endl;
        cout<<findex<<" "<<lindex<<endl;
        cout << max(findex+1,n-lindex-1) << "\n";
    }
    return 0;
}
