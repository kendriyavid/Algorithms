//https://codeforces.com/problemset/problem/742/A
#include <bits/stdc++.h>
using namespace std;

long long power(int base, int power){
    long long result=1;
        while(power!=0){
            if(power%2!=0){
            result*=base;
            power--;
        }else{
            base*=base;
            power/=2;
        }
    }
    return result;
}

int main(){

    int n;
    cin>>n;
    cout<<power(8,n)%10;
    return 0;
}