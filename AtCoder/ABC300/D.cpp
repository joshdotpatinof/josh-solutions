// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 3*1e5+1;

void solve() {
    ll n; cin >> n;
    vector<ll> sieve(MAX, true);
    sieve[0] = sieve[1] = false;
    ll p = 2;
    while (p * p <= MAX){
        if (sieve[p]){
            for (ll i = 2 * p; i <= MAX; i += p){
                sieve[i] = false;
            }
        }
        p++;
    }
    
    vector<ll> primes;
    for (int i = 2; i <= MAX; ++i){
        if (sieve[i]){
            primes.push_back(i);
        }
    }
    ll ans = 0;
    for (int i = 0; i < primes.size(); ++i){
        int k = primes.size() - 1;
        for (int j = i + 1; j < k and j < primes.size(); ++j){
            while (j < k){
                ll v = primes[i] * primes[i] * primes[j];

                if (v > n) {k--; continue;}
                v *= primes[k];
                if (v > n) {k--; continue;}
                v *= primes[k];
                if (v > n) {k--; continue;}
                break;
            }
            ans += (k-j);
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