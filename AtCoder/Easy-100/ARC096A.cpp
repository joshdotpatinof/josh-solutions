// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    ll min_price = a * x + b * y;
    int target = min(x, y);
    ll try_price_ab = (2 * target) * c;
    if (abs(x - y) > 0){ // i.e. they are not the same
        if (x > y){
            try_price_ab += (x - target) * a;
        } else {
            try_price_ab += (y - target) * b;
        }
    }
    min_price = min(min_price, try_price_ab);
    // try version where oversell AB
    target = max(x, y);
    ll try_again = (2 * target) * c;
    min_price = min(min_price, try_again);
    cout << min_price << endl;
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