#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    if(n%2==0){
        //even
        if(k<=n/2){
            //negative
            int result = 1 + 2*(k-1);
            cout<<result<<endl;
            return 0;
        }else{
            // positive
            int result = 2*(k-n/2);
            cout<<result<<endl;
            return 0;
        }
    }else{
        //odd
        if(k<=(n/2)+1){
            // negative
            int result = 1+2*(k-1);
            cout<<result<<endl;
            return 0;
        }else{
            // positive
int result = 2*((k - ((n+1)/2)));
            cout<<result<<endl;
            return 0;
        }
    }
    return 0;
}