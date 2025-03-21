#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    long long count=n;
    int j=0;
    long long maxe = INT_MIN;
    long long mine = INT_MAX;
    multiset<long long> mst;
    for(int i=0;i<n;i++){
        mst.insert(vec[i]);
        maxe = mst.;
        mine = min(mine,vec[i]);
        cout<<maxe<<" "<<mine<<" "<<i<<" "<<j<<endl;
        // check the condition
        while(j<i && maxe-mine>k){
            j++;
            maxe = max(maxe,vec[j]);
            mine = min(mine,vec[j]);
        }
        count+=i-j;
    }
    cout<<count<<endl;
    return 0;
}