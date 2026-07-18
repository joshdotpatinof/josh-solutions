// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int idx(int i, int j, int m){
    return i * m + j;
}

pair<int, int> xdi(int idx, int m){
    int i = idx / m;
    int j = idx % m;
    return {i, j};
}

void bfs(int start, vector<vector<int>> &adj, int end, vector<bool> &vis, int n, int m){
    queue<int> q;
    vector<int> d(n * m), p(n * m);
    q.push(start);
    vis[start] = true;
    p[start] = -1;
    while (!q.empty()){
        int v = q.front();
        q.pop();
        for (int u: adj[v]){
            if (!vis[u]){
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }

    if (!vis[end]){
        cout << "NO\n";
    } else {
        cout << "YES\n";
        vector<char> path;
        int origin = end;
        for (int v = end; v != -1; v = p[v]){
            if (v == origin){
                continue;
            } else {
                auto [i1, j1] = xdi(origin, m);
                auto [i2, j2] = xdi(v, m);
                int di = i1 - i2;
                int dj = j1 - j2;
                if (di == -1 and dj == 0){
                    path.push_back('U');
                } else if (di == +1 and dj == 0){
                    path.push_back('D');
                } else if (di == 0 and dj == -1){
                    path.push_back('L');
                } else if (di == 0 and dj == +1){
                    path.push_back('R');
                }
                origin = v;
            }            
        }
        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        for (auto c : path){
            cout << c;
        }
        cout << endl;
    }
}


void solve() {
    int n, m; cin >> n >> m;
    vector<string> a(n);
    for (auto &x : a){
        cin >> x;
    }
    int start = -1;
    int end = -1;
    vector<vector<int>> adj(n * m);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (a[i][j] != '#'){
                if (a[i][j] == 'A'){
                    start = idx(i, j, m);
                }

                if (a[i][j] == 'B'){
                    end = idx(i, j, m);
                }

                // check four dirs
                if (i + 1 < n and a[i + 1][j] != '#'){
                    adj[idx(i, j, m)].push_back(idx(i + 1, j, m));
                }
                if (i - 1 >= 0 and a[i - 1][j] != '#'){
                    adj[idx(i, j, m)].push_back(idx(i - 1, j, m));
                }
                if (j + 1 < m and a[i][j + 1] != '#'){
                    adj[idx(i, j, m)].push_back(idx(i, j + 1, m));
                }
                if (j - 1 >= 0 and a[i][j - 1] != '#'){
                    adj[idx(i, j, m)].push_back(idx(i, j - 1, m));
                }
            }
        }
    }
    vector<bool> vis(n * m);
    bfs(start, adj, end, vis, n, m);
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