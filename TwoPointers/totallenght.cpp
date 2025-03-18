#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long long s;
    cin>>n>>s;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    // prefixing
    vector<long long> prefix(n+1);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1]+vec[i-1];
    }
    int j=0;
    int total_length=0;
    for(int i=1;i<=n;i++){
        while(j<i && prefix[i]-prefix[j]>s){
            j++;
        }  
        int sublen = i-j-1;
        total_length+=  ((sublen+1)*(sublen+2))/2;
    }

    cout<<total_length;
    return  0;
}