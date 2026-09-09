// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll f(ll x, vector<ll> &a, vector<ll> &fa){
    const auto j = upper_bound(begin(a) + 1, end(a), x) - begin(a) - 1;
    return fa[j] + (fa[j + 1] - fa[j]) / (a[j + 1] - a[j]) * (x - a[j]);
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x; 
    }
    vector<ll> fa(n);
    for (ll i = 1; i < n; ++i){
        if (i % 2 == 0) fa[i] = fa[i - 1] + a[i] - a[i-1];
        else fa[i] = fa[i-1];
    }

    ll q; cin >> q;
    while (q--){
        ll l, r; cin >> l >> r;
        cout << f(r, a, fa) - f(l, a, fa) << endl;
    }
}

int main() {
    fast_io;
    //ll t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    //}
    return 0;
}