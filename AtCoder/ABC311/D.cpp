// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<string> g(n);
    for (auto &s : g) cin >> s;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    vector<vector<bool>> vis_stops(n, vector<bool>(m, false));
    vector<vector<bool>> vis_cells(n, vector<bool>(m, false));

    queue<pair<int, int>> q;
    int start_r = 1, start_c = 1;
    q.push({start_r, start_c});
    vis_cells[start_r][start_c] = true;
    vis_stops[start_r][start_c] = true;
    while (!q.empty()){
        auto [r, c] = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i){
            int curr_r = r;
            int curr_c = c;

            while (g[curr_r + dr[i]][curr_c + dc[i]] != '#'){
                curr_r += dr[i];
                curr_c += dc[i];
                vis_cells[curr_r][curr_c] = true;
            }

            if (!vis_stops[curr_r][curr_c]){
                vis_stops[curr_r][curr_c] = true;
                q.push({curr_r, curr_c});
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (vis_cells[i][j]){
                ans++;
            }
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