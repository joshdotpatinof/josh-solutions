// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b; cin >> a >> b;
    if (a == 0 or b == 0){
        cout << "Zero\n";
        return;
    }

    if (a > 0 and b > 0){
        cout << "Positive\n";
        return;
    }

    if (a < 0 and b < 0){
        ll mn = min(a, b);
        ll mx = max(a, b);
        ll count = abs(mn) - abs(mx) + 1;
        if (count % 2 == 0){
            cout << "Positive\n";
        } else {
            cout << "Negative\n";
        }
        return;
    }

    cout << "Zero\n";
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