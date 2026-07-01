// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll x, y; cin >> x >> y;
    if (y > x){
        cout << "NO\n";
        return;
    }
    
    if (x % y == 0){
        cout << "YES\n";
        return;
    } else {
        cout << "NO\n";
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