// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    unordered_set<ll> mp;
    for (int i = 0; i < n; ++i){
        ll x; cin >> x;
        mp.insert(x);
    }

    for (int i = 1; i <= n; ++i){
        if (mp.count(i) == 0){
            cout << i << endl;
            return;
        }
    }

    // cout << -1 << endl;
}

int main() {
    fast_io;
    // int t = 1;
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}