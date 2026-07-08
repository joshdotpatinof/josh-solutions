// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> e(m);
    for (auto &[x, y]: e){
        cin >> x >> y;
    }
    ll rmin = LONG_LONG_MAX;
    ll lmax = -1;
    for (auto [l, r]: e){
        rmin = min(rmin, r);
        lmax = max(lmax, l);
    }

    ll ans = rmin - lmax + 1;
    ll zero = 0;
    ans = max(zero, ans);
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