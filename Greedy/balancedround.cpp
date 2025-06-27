#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int longest = 0;
        int cstreak=0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(i>0 && abs(vec[i]-vec[i-1])<=k){
                cstreak++;
                longest = max(longest,cstreak);
            }else{
                cstreak=1;
            }
        }
        longest = max(longest,cstreak);
        cout<<n-longest<<endl;
    }
    return 0;
}