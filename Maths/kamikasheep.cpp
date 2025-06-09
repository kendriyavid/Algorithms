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
        int max = INT_MIN;
        int min = INT_MAX;

        for(int i=0;i<n;i++){
            if(vec[i]>max){
                max = vec[i];
            }

            if(vec[i]<min){
                min = vec[i];
            }
        }
        cout<<max-min<<endl;
    }
    return 0;
}