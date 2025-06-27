#include <bits/stdc++.h>
using namespace std;

bool cycledetectiondfs(int u, vector<vector<int>> &adj, int prev, vector<bool> &visited) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            if(cycledetectiondfs(v, adj, u, visited)) {
                return true;
            }
        } else if(v != prev) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    bool isCycle = false;
    for(int u = 0; u < n; u++) {
        if(!visited[u]) {
            if(cycledetectiondfs(u, adj, -1, visited)) {
                isCycle = true;
                break;
            }
        }
    }

    cout << (isCycle ? "yes" : "no") << endl;

    return 0;
}



