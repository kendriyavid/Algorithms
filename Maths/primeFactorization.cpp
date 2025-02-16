#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin>>number;
    unordered_map<int,int> mp;
    for(int i=2;i*i<=number;i++){
        int count=0;
        while(number%i==0){
            number/=i;
            count++;
        }
        if(count>0){
            mp[i] = count;
        }
    }
    if(number>1){
        mp[number]=1;
    }
    return 0;
}