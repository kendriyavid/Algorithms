#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        long long totalsubarrays=0;
        long long streak = 0;
        if(vec[0]<=q){
            streak++;
        }
        for(int i=1;i<n;i++){
            if(vec[i]<=q && vec[i-1]<=q){
                streak++;
            }else{
                if(streak>=k){
                    totalsubarrays+=((streak-k+1)*(streak-k+2))/2;
                }
                streak=0;
                if(vec[i]<=q){
                    streak++;
                }
            }
        }

        if(streak>=k){
             totalsubarrays+=((streak-k+1)*(streak-k+2))/2;
        }

        cout<<totalsubarrays<<endl;
    }
    return 0;
}