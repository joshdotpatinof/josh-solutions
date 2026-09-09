// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MOD = 1e9 + 7;

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> coins(n);
    for (auto &c : coins) cin >> c;

    // dp[i] = the number of distinct ways to produce sum x with the avail coins
    vector<ll> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; ++i){
        for (auto c : coins){
            if (i - c >= 0){
                dp[i] = (dp[i] + dp[i-c]) % MOD;
            }
        }
    }

    // for (auto c : dp){
    //     cout << c << " ";
    // }
    // cout << endl;
    
    cout << dp[x] << endl;
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