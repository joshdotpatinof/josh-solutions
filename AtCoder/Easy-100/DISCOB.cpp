// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }

    vector<ll> pref_sum(n + 1);
    pref_sum[0] = 0;
    for (int i = 1; i <= n; ++i){
        pref_sum[i] = pref_sum[i - 1] + a[i-1];
    }

    ll total_sum = pref_sum[n]; // full thing
    ll min_moves = LONG_LONG_MAX;
    for (int i = 0; i < n; ++i){
        ll left = pref_sum[i + 1];
        ll right = total_sum - left;
        min_moves = min(min_moves, abs(left - right));
    }

    cout << min_moves << endl;
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