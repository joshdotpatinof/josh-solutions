// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<tuple<ll, ll, ll>>> adj(n);
    for (int i = 0; i < m; ++i){
        ll a, b, c; cin >> a >> b >> c;
        a--; b--;
        adj[a].push_back({b, c, i + 1});
        adj[b].push_back({a, c, i + 1});
    }
    vector<ll> dist(n, INF);
    vector<ll> used_edge(n);

    auto dijkstra = [&](ll start){
        priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
        dist[start] = 0;
        pq.push({0, start});
        while (!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            
            if (d > dist[u]) continue;
            for (auto& [v, w, idx] : adj[u]){
                if (dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    used_edge[v] = idx;
                    pq.push({dist[v], v});
                }
            }
        }
    };

    dijkstra(0);
    for (int i = 1; i < n; ++i){
        cout << used_edge[i] << (i == n-1 ? "" : " ");
    }
    cout << '\n';
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