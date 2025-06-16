#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int minimum=INT_MAX;
        int divisor = b;
        for(int i=0;i<30;i++){
            int steps=i;
            int number=a;
            while(steps<30 && number!=0){
                number = number/divisor;
                steps++;
            }
            divisor++;
            minimum = min(minimum,steps);
        }
        cout<<minimum<<endl;
    }
    return 0;
}