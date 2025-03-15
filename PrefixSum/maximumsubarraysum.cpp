#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> prefix(n);
    prefix[0] = vec[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+vec[i];
    }
    int maxsum = 0;
    int maxneg = 0;
    for(int i=0;i<n;i++){
        maxsum = max(maxsum,prefix[i]-maxneg);
        maxneg= min(maxneg,prefix[i]);
    }
    cout<<maxsum;
    return 0;
}