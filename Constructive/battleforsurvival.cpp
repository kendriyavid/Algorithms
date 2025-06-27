#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        long long sum = 0;
        for(int i=0;i<n-2;i++){
            sum+=vec[i];
        }
        cout<<vec[n-1]-(vec[n-2]-sum)<<endl;
    }
    return 0;
}