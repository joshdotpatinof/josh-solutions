// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll h, w; cin >> h >> w;

    if (w < 2 or h < 2){
        cout << 1 << endl;
    } else {
        ll prod = h * w;
        if (prod % 2 == 0){
            cout << prod / 2 << endl;
        } else {
            cout << (prod + 1) / 2 << endl;
        }
    }
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