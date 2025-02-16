// generates numbers which are prime till a certain limit
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin>>number;
    vector<bool> prime(number,true);
    for(int i=0;i*i<=number;i++){
        if(prime[i]){
            for(int j=i;j<=number;j+=i){
                prime[i]==false;
            }
        }
    }    
    return 0;

}