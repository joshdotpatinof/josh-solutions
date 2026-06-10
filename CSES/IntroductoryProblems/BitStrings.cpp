// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MOD = 1e9 + 7;

ll mod_exponentiation(ll x, ll n){
    if (n == 0){
        return 1 % MOD;
    }

    if (n % 2 == 0){
        return (mod_exponentiation(x, n/2) * mod_exponentiation(x, n/2)) % MOD;
    } else {
        return (mod_exponentiation(x, n-1) * x) % MOD;
    }
}

void solve() {
    ll n; cin >> n;
    cout << mod_exponentiation(2, n) << endl;
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