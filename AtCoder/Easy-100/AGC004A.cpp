// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll num_of_cubes = a * b * c;
    // ll min_diff = LONG_LONG_MAX;
    // can't brute
    if (num_of_cubes % 2 == 0){
        cout << 0 << endl;
        // if there are even num of cubes, can split it evenly ?
    } else {
        vector<ll> x(3);
        x[0] = a;
        x[1] = b;
        x[2] = c;
        sort(x.begin(), x.end());

        cout << x[0] * x[1] << endl;
    }
    // cout << min_diff << endl;
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