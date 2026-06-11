// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());

    ll count = 1;
    ll prev = a[0];
    for (ll i = 1; i < n; ++i){
        if (a[i] != prev){
            count++;
        }
        prev = a[i];
    }
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