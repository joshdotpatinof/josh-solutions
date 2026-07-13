// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll q, h, s, d, n; cin >> q >> h >> s >> d >> n;
    // q - 0.25 L
    // h - 0.5 L 
    // s - 1 L
    // d - 2 L
    ll min_half = min(2 * q, h);
    ll min_full = min(2 * min_half, s);

    if (2 * min_full <= d){
        cout << min_full * n << endl;
    } else { // 2 * min_full > d
        if (n % 2 == 0){
            cout << d * (n / 2) << endl;
        } else {
            cout << (d * (n - 1) / 2) + min_full << endl;
        }
    }
}


int main() {
    fast_io;
    //ll t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    return 0;
}