// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll k, n; cin >> k >> n;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    ll min_dist = LONG_LONG_MAX;
    for (int i = 0; i < n; ++i){
        ll dist_left;
        ll dist_right;

        if (i == 0){
            dist_left = a[0] + (k - a[1]);
            dist_right = (a[n-1] - a[0]);
        } else if (i == (n-1)){
            dist_left = (a[n-1] - a[0]);
            dist_right = (k - a[n-1]) + a[n-2];
        } else {
            dist_left = a[i] + (k - a[i+1]);
            dist_right = (k - a[i]) + a[i-1];
        }

        min_dist = min(dist_left, min_dist);
        min_dist = min(dist_right, min_dist);
    }
    cout << min_dist << endl;
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