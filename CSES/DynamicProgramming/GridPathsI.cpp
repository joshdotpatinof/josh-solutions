// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9+7;

void solve() {
    int n; cin >> n;
    vector<string> grid(n);
    for (auto &r : grid) cin >> r;
    // dp[i][j] = the number of paths MOD from the upper left cell to the (i, j) cell
    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][0] = 1;
    if (grid[0][0] == '*') dp[0][0] = 0;
    // down = +1,0
    // right = 0, +1

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (grid[i][j] == '*'){
                dp[i][j] = 0;
                continue;
            } 
            if (i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
        }
    }

    cout << dp[n-1][n-1] << endl;
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