// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void dfs(int v, vector<bool> &vis, vector<vector<int>> &adj){
    vis[v] = true;
    for (int i : adj[v]){
        if (!vis[i]){
            dfs(i, vis, adj);
        }
    }
}

int idex(int i, int j, int col){
    // idx = i * # cols + j
    return i * col + j;
}

pair<int, int> xedi(int idx, int col){
    int i = idx / col;
    int j = idx % col;
    return {i, j};
}

void solve() {
    int n, m; cin >> n >> m;
    vector<string> a(n);
    for (auto &x : a){
        cin >> x;
    }
    int idx = 0;
    vector<vector<int>> adj(n * m);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (a[i][j] == '.'){
                if (i + 1 < n and a[i+1][j] != '#'){
                    adj[idex(i, j, m)].push_back(idex(i+1, j, m));
                }
                if (i - 1 >= 0 and a[i-1][j] != '#'){
                    adj[idex(i, j, m)].push_back(idex(i-1, j, m));
                }
                if (j + 1 < m and a[i][j+1] != '#'){
                    adj[idex(i, j, m)].push_back(idex(i, j+1, m));
                }
                if (j - 1 >= 0 and a[i][j-1] != '#'){
                    adj[idex(i, j, m)].push_back(idex(i, j-1, m));                    
                }
            }
        }
    }


    vector<bool> vis(n * m, false);
    int count = 0;
    for (int i = 0; i < (n * m); ++i){
        auto [x, y] = xedi(i, m);
        if (a[x][y] == '.' and !vis[i]){
            dfs(i, vis, adj);
            count++;
        }
    }
    cout << count << endl;
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