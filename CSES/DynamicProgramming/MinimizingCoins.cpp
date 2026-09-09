// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 1e9; 

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> coins(n);
    for (auto &c : coins) cin >> c;
    // dp[i] = the minimum number of coins needed to create sum i
    vector<ll> dp(x + 1, MAX);
    dp[0] = 0; // to build a sum of 0 coins, you'll need a minimum of 0 coins 

    for (int i = 1; i <= x; ++i){
        for (auto coin : coins){
            if (i - coin >= 0){
                dp[i] = min(dp[i], dp[i-coin]+1); 
            }
        }
    }

    if (dp[x] == MAX){
        cout << -1 << endl;
    } else {
        cout << dp[x] << endl;
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