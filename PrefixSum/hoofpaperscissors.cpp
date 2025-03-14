// https://usaco.org/index.php?page=viewproblem2&cpid=691
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    vector<int [3]> prefix(n);
    if(vec[0]=='H'){
        prefix[0][0]=1;
    }else if (vec[0]=='P'){
        prefix[0][1]=1;
    }else{
        prefix[0][2]=1;
    }

    for(int i=1;i<n;i++){
        if(vec[i]=='H'){
            prefix[i][0]++;
            prefix[i][1] = prefix[i-1][1];
            prefix[i][2] = prefix[i-1][2];
        }else if (vec[i]=='P'){
            prefix[0][1]++;
            prefix[i][0] = prefix[i-1][0];
            prefix[i][2] = prefix[i-1][2];
        }else{
            prefix[0][2]++;
            prefix[i][1] = prefix[i-1][1];
            prefix[i][0] = prefix[i-1][0];

        }
    }

    vector<int [3]> suffix(n);

    if(vec[n-1]=='H'){
        suffix[n-1][0]=1;
    }else if (vec[n-1]=='P'){
        suffix[n-1][1]=1;
    }else{
        suffix[n-1][2]=1;
    }

    for(int i=n-1;i>=0;i--){
        if(vec[i]=='H'){
            suffix[i][0]++;
            suffix[i][1] = suffix[i-1][1];
            suffix[i][2] = suffix[i-1][2];
        }else if (vec[i]=='P'){
            suffix[i][1]++;
            suffix[i][0] = suffix[i-1][0];
            suffix[i][2] = suffix[i-1][2];
        }else{
            suffix[i][2]++;
            suffix[i][1] = suffix[i-1][1];
            suffix[i][0] = suffix[i-1][0];
        }
    }


    int maxl=0;
    // finding maximum
    for(int i=0;i<n-1;i++){
        // hoof
        maxl = max(maxl,prefix[i][0]+suffix[i+1][0]);
        // paper
        maxl = max(maxl,prefix[i][1]+suffix[i+1][1]);
        //scissor
        maxl  =  max(maxl,prefix[i][2]+suffix[i+1][2]);
    }

    cout<<maxl;

    return 0;
}

