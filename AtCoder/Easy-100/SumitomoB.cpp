// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    ll x = (n * 100) / 108;
    if ((x * 108) / 100 == n){
        cout << x << endl;
    } else if (((x+1) * 108) / 100 == n){
        cout << x + 1 << endl;
    } else {
        cout << ":(\n";
    }
}
// X = (N * 100) / 108

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    //}
    return 0;
}