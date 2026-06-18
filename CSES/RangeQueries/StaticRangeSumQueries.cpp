// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    
    vector<ll> pref_sum(n+1);
    pref_sum[0] = 0;
    for (int i = 1; i <= n; ++i){
        pref_sum[i] = pref_sum[i-1] + a[i-1];
    }

    // for (auto x: pref_sum){
    //     cout << x << " ";
    // }
    // cout << endl;

    while (q--){
        ll a, b; cin >> a >> b;
        cout << pref_sum[b] - pref_sum[a-1] << endl;
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