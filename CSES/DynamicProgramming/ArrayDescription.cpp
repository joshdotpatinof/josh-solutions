// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9+7;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> x(n);
    for (auto &num: x) cin >> num;
    // dp[i][j] = the number of valid prefixes length i ending with value j
    vector<vector<int>> dp(n+1, vector<int>(m + 1));
    dp[0][0] = 0;
    if (x[0] == 0){
        for (int j = 1; j <= m; ++j){
            dp[1][j] = 1;
        }
    } else {
        dp[1][x[0]] = 1;
    }

    for (int i = 2; i <= n; ++i){
        if (x[i-1] != 0){
            dp[i][x[i-1]] = (dp[i][x[i-1]] + dp[i-1][x[i-1]-1] + dp[i-1][x[i-1]]) % MOD;
            if ((x[i-1]+1) <= m){
                dp[i][x[i-1]] = (dp[i][x[i-1]] + dp[i-1][x[i-1]+1]) % MOD;
            }
            continue;
        }
        for (int j = 1; j <= m; ++j){
            dp[i][j] = (dp[i][j] + dp[i-1][j-1] + dp[i-1][j]) % MOD;
            if (j+1 <= m) dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD;   
        }
    }

    int ans = 0;
    for (int j = 1; j <= m; ++j){
        ans = (ans + dp[n][j]) % MOD;
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