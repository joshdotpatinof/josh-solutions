// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> bfs(int start, const vector<vector<int>> &adj, vector<int> &dist){
    queue<int> q;
    dist[start] = 0;
    q.push(start);

    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : adj[u]){
            if (dist[v] == -1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

void solve() {
    int n1, n2, m; cin >> n1 >> n2 >> m;
    int V = n1 + n2;
    vector<vector<int>> adj(V + 1);

    for (int i = 0; i < m; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);;
    }
    vector<int> dist1(V + 1, -1);
    vector<int> distN(V + 1, -1);
    bfs(1, adj, dist1);
    bfs(V, adj, distN);

    int max_d1 = 0;
    for (int u = 1; u <= n1; ++u){
        max_d1 = max(max_d1, dist1[u]);
    }

    int max_d2 = 0;
    
    for (int v = n1 + 1; v <= V; ++v){
        max_d2 = max(max_d2, distN[v]);
    }
    
    cout << max_d1 + max_d2 + 1 << endl;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    //}
    return 0;
}