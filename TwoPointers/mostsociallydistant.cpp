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
        sort(vec.begin(),vec.end());
        int i=0;
        int j=n-1;
        vector<int> result;
        bool flag=true;
        while(i!=j){
            if(flag){
                result.emplace_back(vec[i]);
                i++;
                flag = false;
            }else{
                result.emplace_back(vec[j]);
                j--;
                flag=true;
            }
        }
        cout<<result.size()<<endl;
        for(int x:result){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}