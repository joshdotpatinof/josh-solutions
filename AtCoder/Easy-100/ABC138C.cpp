// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<double> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    double ans = a[0];
    for (ll i = 1; i < n; ++i){
        ans += a[i];
        ans /= 2;
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