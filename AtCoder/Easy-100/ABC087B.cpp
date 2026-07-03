// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    vector<ll> dp(x + 1, 0);
    dp[0] = 1;

    vector<pair<int, int>> coins = {{500, a}, {100, b}, {50, c}};
    for (auto [value, count] : coins) {
        for (int amount = x; amount >= 0; --amount) {
            for (int take = 1; take <= count && amount >= take * value; ++take) {
                dp[amount] += dp[amount - take * value];
            }
        }
    }

    cout << dp[x] << '\n';
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