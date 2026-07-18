// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void dfs(int v, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &grp){
    vis[v] = true;
    grp.push_back(v);
    for (int i: adj[v]){
        if (!vis[i]){
            dfs(i, adj, vis, grp);
        }
    }
}
void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    vector<bool> vis(n, false);
    vector<vector<int>> groups;

    for (int i = 0; i < n; ++i){
        if (!vis[i]){
            vector<int> grp;
            dfs(i, adj, vis, grp);
            groups.push_back(grp);
        }
    }

    if (groups.size() == 1){
        cout << 0 << endl;
    } else {
        cout << groups.size() - 1 << endl;
        for (int i = 0; i < groups.size() - 1; ++i){
            cout << groups[i][0] + 1<< " " << groups[i + 1][0] + 1 << endl; 
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