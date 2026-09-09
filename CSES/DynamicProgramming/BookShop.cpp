// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x; cin >> n >> x;
    vector<int> h(n);
    for (auto &p : h) cin >> p;
    vector<int> s(n);
    for (auto &p : s) cin >> p;

    // dp[i][j] = maximum number of pages up to the ith book with price == j
    vector<vector<int>> dp(n + 1, vector<int>(x + 1));

    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i){ 
        for (int j = 0; j <= x; ++j){
            // skip book
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            if (j - h[i-1] >= 0){
                // choose book
                dp[i][j] = max(dp[i][j], dp[i-1][j-h[i-1]] + s[i-1]);
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= x; ++j){
        ans = max(ans, dp[n][j]);
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