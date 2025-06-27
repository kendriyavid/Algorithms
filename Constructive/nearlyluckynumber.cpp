#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long count=0;
    while(n!=0){
        int digit = n%10;
        cout<<"digit: "<<digit<<endl;
        if(digit==4|| digit==7){
            count++;
        }
        n/=10;
    }

    long long  c = 0;
    long long total=0;
    // cout<<count<<endl;
    while(count!=0){
        int digit = count%10;
        if(digit==4||digit==7){
            c++;
        }
        count/=10;
        total++;
    }
    // cout<<c<<endl;
    // cout<<total<<endl;
    if(c==total && total!=0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}