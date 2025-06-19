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

        int possum=0;
        bool zero=false;
        int negcount=0;
        int minimum = INT_MAX;

        for(int i=0;i<n;i++){
            int absval = abs(vec[i]);
            possum+=absval;
            minimum = min(minimum,absval);
            if(vec[i]==0){
                zero = true;
            }else if(vec[i]<0){
                negcount++;
            }
        }

        if(negcount%2==0){
            cout<<possum<<endl;
        }else{
            if(zero){
                cout<<possum<<endl;
            }else{
                cout<<possum - 2*minimum<<endl;
            }
        }
    }
}