#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<"yes"<<endl;
            continue;
        }
        if(m>n){
            cout<<"NO"<<endl;
        }else if(n%3!=0){
            cout<<"NO"<<endl;
        }else{
            // while(m%2==0){
            //     m/=2;
            // }
            // if(n%m==0){
            //     cout<<"YES"<<endl;
            // }else{
            //     cout<<"NO"<<endl;
            // }
            int i=0;
            bool flag = false;
            if(m%2==0){
                while(i<=40){
                    if(m==n){
                        flag = true;
                        break;
                    }
                    m/=2;
                    m*=3;
                    i++;
                }
            }else{
                while(i<=15){
                    if(m==n){
                        flag = true;
                        break;
                    }
                    m*=3;
                    i++;
                }
            }
            
            if(flag){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}