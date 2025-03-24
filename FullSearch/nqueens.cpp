#include <bits/stdc++.h>
using namespace std;

bool nqueens(vector<vector<int>> &mat, set<int> &col, set<int> &pos,set<int> &neg,int i, int j,int n){
    if(i<=0 || j<=0 || i>=n || j>=n){
        return false;
    }
    if(i>=n){
        return true;
    }
    mat[i][j]="Q";
    col.insert(j);
    neg.insert(i-j);
    pos.insert(i/j);
    bool b = false;
    for(int x=j+1;x<n;x++){
        if(neg.find(j+1-x)==neg.end() && pos.find(j+1/x)!=pos.end() && col.find(j+1)!=col.end()){
            b= nqueens(mat,col,neg,pos,i+1,x,n);
        }
    }
    mat[i][j]="";
    col.erase(j);
    neg.erase(abs(i-j));
    pos.erase(i/j);
    if(!b){
        for(int x=j+1;x<n;x++){
            if(neg.find(j+1-x)==neg.end() && pos.find(j+1/x)!=pos.end() && col.find(j+1)!=col.end()){
                b= nqueens(mat,col,neg,pos,i+1,x,n);
            }
    }
    return b;
}

int main(){

    int n;
    cin>>n;
    vector<vector<int>>  vec(n,vector<int>(n));
    set<pair<int,int>> col;
    set<pair<int,int>> pos;
    set<pair<int,int>> neg;
    nqueens(vec,col,neg,pos,0,0,n);
    return 0;
}