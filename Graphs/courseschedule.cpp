#include <bits/stdc++.h>
using namespace std;

// courseschedule

int main(){


    int n;
    cin>>n;
    vector<vector<int>> adj(n);
    vector<int> indegree(n);
    while( cin>>u>>v){
        int u,v;
        cin>>u>>v;
        adj[u].emplace_back(v);
        indegree[v]++;
    }
    vector<int>result;

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();
        result.emplace_back(u);
        for(int v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0){
                q.push(v);
            }
        }
    }

    if(result.size()==n){
        cout<<"yes"<<endl;
    }else{cout<<"no"<<endl;}

    return 0;
}



/*

    cs3
    sort the array with starting time,
    currtime=0;
    int j=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(currtime<=course[i].first){
            currtime = course[i].first
            
        }
    }

*/