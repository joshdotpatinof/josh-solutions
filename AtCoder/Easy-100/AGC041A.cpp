// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    ll a, b; cin >> a >> b;

    // ll ans = 0
    if (a % 2 == b % 2){
        cout << (b - a) / 2 << endl;
    } else {
        cout << min(a - 1, n - b) + 1 + (b - a - 1) / 2 << endl; 
    }
    // cout << ans << end
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