#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int low =1;
        int high = n;
        int i=0;
        int j=n-1;
        vector<int> result(n);
        bool flag = true;
        while(low<=high && i<=j){
            
            if(flag){
                result[i] = low;
                low++;
                if(i<=j){
                    result[j] = low;
                    low++;flag=!flag;i++;j--;
                }

            }else{  
                result[i] = high;
                high--;
                if(i<=j){
                    result[j] = high;
                    high--;flag=!flag;i++;j--;
                }
            }
        }

        for(int x: result){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}