// #include <bits/stdc++.h>
// using namespace std;

// void dfs(int u, vector<vector<int>> &matrix, int n, vector<bool> &visited) {
//     visited[u] = true;
//     cout << u << " "; // do something, like print

//     for (int v = 0; v < n; v++) {
//         if (matrix[u][v] == 1 && !visited[v]) {
//             dfs(v, matrix, n, visited);
//         }
//     }
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> matrix(n, vector<int>(n, 0));
//     vector<bool> visited(n, false);

//     // Read edges
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         matrix[u][v] = 1;
//         matrix[v][u] = 1; // if undirected
//     }

//     // DFS for each unvisited component
//     for (int u = 0; u < n; u++) {
//         if (!visited[u]) {
//             dfs(u, matrix, n, visited);
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void dfs(int u,vector<vector<int>> &adj , vector<bool> &visited ){
    visited[u] = true;
    // do something

    for(int v: adj[u]){
        if(visited[v]!=true){
            dfs(v,adj,visited);
        }
    }
}

int main(){

    int n;
    cin>>n;
    vector<vector<int>> adj(n);
    vector<bool> visited(n,false);

    for(int u=0;u<n;u++){
        if(visited[u]!=true){
            dfs(u,adj,visited);
        }
    }
    return 0;
}