# include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> vec1(n1);
    vector<int> vec2(n2);
    for(int i=0;i<n1;i++){
        cin>>vec1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>vec2[i];
    }
    vector<int> result(n1+n2);
    int i=0;int j=0; int r=0;
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    while(i<n1 && j<n2){
        if(vec1[i]>vec2[j]){
            result[r] = vec2[j];
            j++;
        }else{
            result[r] = vec1[i];
            i++;
        }
        r++;
    }

    if(r<n1+n2){
        // vec1 case
        if(i<n1){
            for(int x=r;x<n1+n2;x++){
                result[x] = vec1[i];
                i++;
            }
        //vec2 case
        }else{
            for(int x=r;x<n1+n2;x++){
                result[x] = vec2[j];
                j++;
            }
        }
    }



    return 0;
}