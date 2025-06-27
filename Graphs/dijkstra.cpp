#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

void dijkstra(int src,vector<vector<pii>> &adj, int n){
    vector<int> distances(n,INT_MAX);
    priority_queue<pii> heapq;
    distances[src]=0;
    heapq.push({0,src});

    while(!heapq.empty()){
        pii u = heapq.top();
        heapq.pop();
        for(auto v:adj[u.second]){
            if(v.first+u.first>distances[v.second]){
                continue;
            }else{
                
            }
        }
    }
}

int main(){

    int n, m; // n = number of nodes, m = number of edges
    cin >> n >> m;

    vector<vector<pii>> adj(n); // adjacency list

    for (int i = 0; i < m; ++i) {
        int u, v, w; // edge from u to v with weight w
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // remove this if graph is directed
    }

    int src;
    cin >> src;


    return 0;
}