#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int maxstreak = 0;
    int streak = 1;
    for(int i=1;i<n;i++){
        if(vec[i]-vec[i-1]>=0){
            streak++;
            maxstreak = max(maxstreak,streak);
        }else{
            streak=1;
        }
    }
    cout<<maxstreak<<endl;
    return 0;
}