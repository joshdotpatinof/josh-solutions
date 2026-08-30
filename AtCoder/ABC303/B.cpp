// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> m >> n;
    unordered_map<int, unordered_set<int>> mp;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> grid[i][j];
        }

        for (int j = 0; j < m; ++j){
            if (j == 0){
                mp[grid[i][j]].insert(grid[i][j+1]);
            } else if (j == m - 1){
                mp[grid[i][j]].insert(grid[i][j-1]);
            } else {
                mp[grid[i][j]].insert(grid[i][j+1]);
                mp[grid[i][j]].insert(grid[i][j-1]);
            }
        }
    }
    int count = 0;
    // cout << endl;
    for (int i = 1; i <= m; ++i){
        // cout << i << ": ";
        // for (auto x: mp[i]){
        //     cout << x << " ";
        // }
        // cout << endl;

        count += (m-1) - (int)mp[i].size();
    }
    cout << count / 2 << endl;
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