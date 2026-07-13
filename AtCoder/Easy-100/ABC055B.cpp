// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
const ll MOD = 1e9 + 7;

void solve() {
    ll n; cin >> n;
    ll pow = 1;
    for (int i = 1; i <= n; ++i){
        pow = (pow * i) % MOD;
    }
    cout << pow << endl;
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