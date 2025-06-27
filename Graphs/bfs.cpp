// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m, start;
//     cin >> n >> m >> start;
//     vector<vector<int>> adj(n);
//     vector<bool> visited(n, false);

//     // Read edges
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         // adj[v].push_back(u); 
//     }

//     queue<int> q;
//     q.push(start);
//     visited[start] = true; 
//     vector<int> result;

//     while (!q.empty()) {
//         int u = q.front(); q.pop();
//         result.push_back(u);

//         for (int v : adj[u]) {
//             if (!visited[v]) {
//                 q.push(v);
//                 visited[v] = true; 
//             }
//         }
//     }

//     for (int x : result) cout << x << " ";
//     cout << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n,m,start;
//     cin>>n>>m>>u;
//     vector<vector<int>> adj(n);
//     vector<bool> visited(false);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].emplace_back(v);
//     }

//     queue<int> q;
//     q.push(start);
//     visited[start] = true;

//     while(!q.empty()){
//         int u = q.front().pop();
//         //do the processing
//         for(int v:adj[u]){
//             if(visited[v]!=true){
//                 q.push(v);
//                 visited[v] = true;
//             }
//         }
//     }

//     return 0;
// }