// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool dfs(int node, int ct, vector<int> &team, vector<int> &vis, vector<vector<int>> &adj){
    vis[node] = 1;
    team[node] = ct;
    for (auto &i : adj[node]){
        if (team[i] == 0){
            bool temp = dfs(i, 3 - ct, team, vis, adj);
            if (temp == false){
                return false;
            }
        }
        else if (team[i] == ct){
            return false;
        }
    }
    return true;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> team(n + 1, 0);
    vector<int> vis(n + 1, 0);
    vector<vector<int>> adj(n + 1);
    for (int k = 0; k < m; ++k){
        int i, j; cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    bool ans = true;
    for (int i = 1; i <= n; ++i){
        if (vis[i]){
            continue;
        }
        int res = dfs(i, 1, team, vis, adj);
        if (!res){
            ans = false;
            break;
        }
    }
    if (ans){
        for (int i = 1; i <= n; ++i){
            cout << team[i] << " ";
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE\n";
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