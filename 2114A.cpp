// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = 0;
    for (int i = 0; i < 4; ++i){
        n *= 10;
        n += (s[i] - '0');
    }
    // cout << n << endl;
    int lo = 0, hi = n;
    int ans = -1;
    while (lo <= hi){
        int mi = lo + (hi - lo) / 2;
        if (mi * mi < n){
            lo = mi + 1;
        } else if (mi * mi > n){
            hi = mi - 1;
        } else {
            ans = mi;
            break;
        }
    }

    if (ans == -1){
        cout << ans << endl;
    } else {
        cout << 0 << " " << ans << endl;
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