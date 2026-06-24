// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    ll ans = 0;
    for (auto &x: a){
        cin >> x;
    }    
    for (auto x: a){
        ll a_dist = x;
        ll b_dist = (k - x);

        ll chosen = min(a_dist, b_dist);
        ans += (chosen * 2);
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