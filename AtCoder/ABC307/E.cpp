// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MOD = 998244353;

void solve() {
    ll n, m; cin >> n >> m;
    // dp[i][j] = the number of valid prefixes of length j where (i = 0 - first and jth element are diff; i = 1 - first and jth element are equal)
    vector<vector<ll>> dp(2, vector<ll>(n + 1, 0LL));
    dp[1][1] = m;
    for (int i = 1; i <= n; ++i){
        dp[0][i] = (dp[0][i] + dp[0][i-1] * (m-2)) % MOD;
        dp[1][i] = (dp[1][i] + dp[0][i-1]) % MOD;

        dp[0][i] = (dp[0][i] + dp[1][i-1] * (m-1)) % MOD;
    }
    
    cout << (dp[0][n]) % MOD << endl;
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