// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 1e12 + 1;

ll f(ll n, unordered_map<ll, ll> &dp){
    if (n == 1){
        return 1;
    }

    if (dp.find(n) != dp.end()){
        return dp[n];
    }
    
    ll half = n / 2;
    ll ans = 1 + f(half, dp) + f(half, dp);
    dp[n] = ans;
    return dp[n];
}

void solve() {
    ll H; cin >> H;
    unordered_map<ll, ll> dp;
    ll count = f(H, dp);
    
    cout << count << endl;
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