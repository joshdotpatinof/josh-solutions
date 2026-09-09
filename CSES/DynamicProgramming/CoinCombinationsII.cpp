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
    // dp[i] = the number of distinct ways (ordered) to make sum i with avail coins
    vector<ll> dp(x + 1, 0);
    dp[0] = 1;
    for (auto c: coins){
        for (int i = 1; i <= x; ++i){
            if (i - c >= 0){
                dp[i] = (dp[i] + dp[i-c]) % MOD;
            }
        }
    }

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