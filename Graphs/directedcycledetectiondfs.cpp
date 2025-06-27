#include <bits/stdc++.h>
using namespace std;


bool iscycledirectedfs(int u, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &stack){
    visited[u] = true;
    stack[u] = true;
    for(int v:adj[u]){
        if(visited[v]!=true){
            if(iscycledirectedfs(v,adj,visited,stack)){
                return true;
            };
        }else if(stack[v]){
            return true;
        }
    }
}


int main(){

    int n,m,start;
    cin>>n>>m>>start;
    vector<vector<int>> vec(n);


    return 0;
}