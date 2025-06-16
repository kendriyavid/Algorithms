#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int sum=0;
    for(int x:vec){
        sum+=x;
    }
    int csum=0;
    int j=vec.size()-1;
    int count=0;
    while( j<vec.size() && csum<=sum/2){
        csum+=vec[j];
        count++;
        j--;
    }
    cout<<count<<endl;

    return 0;
}