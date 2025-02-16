#include <bits/stdc++.h>
using namespace std;

int main(){
    int power;
    int base;
    cin>>power>>base;
    int result=1;
    while(power>0){
        if(power%2==0){
            base*=base;
            power/=2;
        }else{
            result*=base;
            power-=1;
        }
    }
    cout<<result;
    return 0;
}