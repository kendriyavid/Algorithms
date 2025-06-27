#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    bool isCycle = false;

    for (int start = 0; start < n; ++start) {
        if (!visited[start]) {
            queue<pair<int, int>> q;
            q.push({start, -1});
            visited[start] = true;

            while (!q.empty()) {
                auto [u, parent] = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        q.push({v, u});
                    } else if (v != parent) {
                        isCycle = true;
                        break;
                    }
                }

                if (isCycle) break;
            }
        }

        if (isCycle) break;
    }

    cout << (isCycle ? "yes" : "no") << endl;
    return 0;
}
