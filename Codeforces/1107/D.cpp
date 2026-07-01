// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (auto &x: a){
        cin >> x;
    }
    for (auto &x: b){
        cin >> x;
    }
    ll alt_sum = 0;
    for (ll i = 0; i < n; ++i){
        ll diff = a[i] - b[i];
        if (i % 2 == 0){
            alt_sum -= diff;
        } else {
            alt_sum += diff;
        }
    }

    if (alt_sum == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}