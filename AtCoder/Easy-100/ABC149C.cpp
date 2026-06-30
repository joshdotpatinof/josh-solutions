// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 1e5 + 20;

void solve() {
    vector<bool> sieve(MAX, true);
    sieve[0] = false;
    sieve[1] = false;

    ll p = 2;
    while (p * p <= MAX){
        if (sieve[p]){
            for (ll i = p * p; i < MAX; i += p){
                sieve[i] = false;
            }
        }
        p++;
    }
    ll x; cin >> x;
    ll ans = -1;
    while (ans == -1){
        if (sieve[x]){
            ans = x;
        } else {
            x++;
        }
    }

    cout << ans << endl;
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