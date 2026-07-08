// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> p(n);
    ll ans = 1;
    for (auto &x : p){
        cin >> x;
    }
    ll mn = p[0];
    for (int i = 1; i < n; ++i){
        if (p[i] < mn){
            ans++;
        }
        mn = min(mn, p[i]);
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