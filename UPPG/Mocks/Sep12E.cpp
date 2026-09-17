// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check(int x, int n, int m, int k, const vector<pair<int, int>>& p, const vector<vector<int>> &a, int u1, int v1, int u2, int v2){
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1, false));

    for (int i = x + 1; i <= k; ++i){
        vis[p[i].first][p[i].second] = true;
    }

    if (vis[u1][v1]) return false;

    // bfs
    queue<pair<int, int>> q;
    q.push({u1, v1});
    vis[u1][v1] = true;

    int empty_count = 0;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    while (!q.empty()){
        auto [r, c] = q.front();
        q.pop();
        if (a[r][c] == 0){
            empty_count++;
        }

        for (int i = 0; i < 4; ++i){
            int next_r = r + dr[i];
            int next_c = c + dc[i];

            if (next_r >= 1 and next_r <= n and next_c >= 1 and next_c <= m and !vis[next_r][next_c]){
                vis[next_r][next_c] = true;
                q.push({next_r, next_c});
            }
        }
    }

    int target_area = (u2 - u1 + 1) * (v2 - v1 + 1);
    return empty_count >= target_area;
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<pair<int, int>> p(k + 1);
    vector<vector<int>> a(n+1, vector<int>(m+1));
    for (int i = 1; i <= k; ++i){
        cin >> p[i].first >> p[i].second;
        a[p[i].first][p[i].second] = i;
    }    
    int u1, v1, u2, v2; cin >> u1 >> v1 >> u2 >> v2;

    int lo = 0;
    for (int i = u1; i <= u2; ++i){
        for (int j = v1; j <= v2; ++j){
            if (a[i][j] > 0){
                lo = max(lo, a[i][j]);
            }
        }
    }
    int hi = k;
    int ans = -1;
    while (lo <= hi){
        int x = lo + (hi - lo) / 2;
        if (check(x, n, m, k, p, a, u1, v1, u2, v2)){
            ans = x;
            hi = x - 1;
        } else {
            lo = x + 1;
        }
    }
    cout << ans << endl;
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