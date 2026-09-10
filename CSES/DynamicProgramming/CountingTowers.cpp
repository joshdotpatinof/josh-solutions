// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9 + 7;

void solve() {
    int t; cin >> t;
    vector<int> qs(t);
    ll max_n = 0;
    for (auto &n : qs){ 
        cin >> n;
        max_n = max(max_n, (ll)n);
    }
    // dp[i][j] = max number of towers MOD with height i with it being joined/separated
    vector<vector<ll>> dp(max_n + 1, vector<ll>(2));
    // j = 0 <- joined
    // j = 1 <= separated
    dp[0][0] = 1;
    dp[0][1] = 1;

    dp[1][0] = 1;
    dp[1][1] = 1;
    
    for (ll i = 2; i <= max_n; ++i){
        dp[i][0] = (2LL * dp[i-1][0] + dp[i-1][1]) % MOD;
        dp[i][1] = (4LL * dp[i-1][1] + dp[i-1][0]) % MOD;
    }

    for (auto q : qs){
        cout << (dp[q][0] + dp[q][1]) % MOD << endl;
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