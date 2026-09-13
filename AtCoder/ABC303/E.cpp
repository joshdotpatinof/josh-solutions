// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void dfs(int u, const vector<vector<int>> & adj, vector<bool> &vis){
    vis[u] = true;
    for (int v : adj[u]){
        if(!vis[v]){
            dfs(v, adj, vis);
        }
    }
}

void solve() {
    int n; cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int root = 1;
    for (int i = 1; i <= n; ++i){
        if (adj[i].size() == 1){
            root = i;
            break;
        }
    }
    
    vector<int> ans;
    // {curr_node, parent, depth}
    stack<tuple<int, int, int>> st;
    st.push({root, 0, 0});
    while (!st.empty()){
        auto [u, p, d] = st.top();
        st.pop();
        if (d % 3 == 1){
            ans.push_back(adj[u].size());
        }

        for (int v : adj[u]){
            if (v != p){
                st.push({v, u, d + 1});
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int k : ans){
        cout << k << " ";
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