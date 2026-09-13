// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<pair<ll, ll>>> adj(n);
    for (int i = 0; i < m; ++i){
        ll a, b, c; cin >> a >> b >> c;
        a--; b--;
        adj[a].push_back({b, c});
    }
    
    
    for (int start = 0; start < n; ++start){
        vector<ll> dist(n, INF);
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
        
        for (auto & [v, w] : adj[start]){
            if (w < dist[v]){
                dist[v] = w;
                pq.push({dist[v], v});
            }
        }

        ll shortest_cycle = INF;

        while (!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            if (d > dist[u]) continue;

            if (u == start){
                shortest_cycle = d;
                break;
            }

            for (auto& [v, w] : adj[u]){
                if (dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        if (shortest_cycle == INF){
            cout << "-1" << endl;
        } else {
            cout << shortest_cycle << "\n";
        }
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