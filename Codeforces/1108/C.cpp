// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
const ll MOD = 1e9 + 7;

ll pow_mod(ll base, ll e){
    ll res = 1;
    base %= MOD;
    while (e > 0){
        if (e % 2 == 1){
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        e /= 2;
    }
    return res;
}

void solve(int n) {
    vector<int> a(n);
    for (auto &x : a){
        cin >> x;
    }

    map<int, ll> dp;
    dp[0] = 1;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == -1) {
            ll next_dp0 = (dp[0] + dp[1]) % MOD;
            dp[0] = next_dp0;
        } else {
            ll ways_to_make_0 = dp[a[i]];     
            ll ways_to_make_1 = dp[a[i] + 1]; 

            dp[0] = (dp[0] + ways_to_make_0) % MOD;
            dp[a[i]] = (dp[a[i]] + ways_to_make_1) % MOD;
        }
    }

    cout << dp[0] << "\n";
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}