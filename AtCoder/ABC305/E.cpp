// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i){
        int a, b; cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> dist(n, -1);
    
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < k; ++i){
        int p, h;
        cin >> p >> h;
        p--;
        if (h > dist[p]){
            dist[p] = h;
            pq.push({h, p});
        }
    }
    
    while (!pq.empty()){
        auto [h, u] = pq.top();
        pq.pop();

        if (h < dist[u]) continue;
        if (h == 0) continue;

        for (int v : adj[u]){
            if (dist[u] - 1 > dist[v]){
                dist[v] = dist[u] - 1;
                pq.push({dist[v], v});
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i){
        if (dist[i] >= 0){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for (auto v : ans){
        cout << v + 1 << " ";
    }
    cout << endl;
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