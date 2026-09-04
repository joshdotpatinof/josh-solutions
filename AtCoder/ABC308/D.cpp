// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int Idx(int i, int j, const int w){
    return i * w + j;
}

void bfs(int start, vector<vector<int>> &adj, vector<bool> &vis){
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : adj[u]){
            if (!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

void solve() {
    int h, w; cin >> h >> w;
    vector<string> g(h);
    for (auto &s : g){
        cin >> s;
    }

    unordered_map<char, char> mp = {{'s', 'n'}, {'n', 'u'}, {'u', 'k'}, {'k', 'e'}, {'e', 's'}};
    
    vector<vector<int>> adj(h * w);

    vector<int> di = {0, 0, -1, 1};
    vector<int> dj = {1, -1, 0, 0};

    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            if (mp.find(g[i][j]) != mp.end()){
                char u = g[i][j];
                for(int k = 0; k < 4; ++k){
                    if (i + di[k] >= 0 and i + di[k] < h and j + dj[k] >= 0 and j + dj[k] < w){
                        if (g[i + di[k]][j + dj[k]] == mp[u]){
                            adj[Idx(i, j, w)].push_back(Idx(i+di[k], j+dj[k], w));
                        }
                    }
                }
            }
        }
    }
    vector<bool> vis(h * w, false);
    bfs(0, adj, vis);
    // for (int i = 0; i < h * w; ++i){
    //     cout << i << ": ";
    //     for (auto y: adj[i]){
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    if (vis[(h*w)-1]){
        cout << "Yes\n";
    } else {
        cout << "No\n";
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