// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> bfs(int start, vector<vector<int>> &adj, vector<int> &par){
    int n = adj.size();
    vector<int> dist(n, -1);
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()){
        int u = q.front(); q.pop();
        for (int v: adj[u]){
            if (dist[v] == -1){
                dist[v] = dist[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }
    return dist;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    vector<int> par(n, -1);
    vector<int> ans = bfs(0, adj, par);
    if (ans[n-1] == -1){
        cout << "IMPOSSIBLE\n";
    } else {
        cout << ans[n-1] + 1 << endl;
        vector<int> ret;
        int curr = n - 1;
        ret.push_back(curr + 1);
        while (curr != 0){
            curr = par[curr];
            ret.push_back(curr + 1);
        }
        reverse(ret.begin(), ret.end());
        for (auto x : ret) cout << x << " ";
        cout << endl;
    }
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