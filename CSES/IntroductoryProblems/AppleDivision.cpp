// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll solve(ll i, const ll n, ll sum, const ll tot, vector<ll> &a) {
    if (i == n){
        return abs(abs(tot - sum) - sum);
    }
    ll res = solve(i + 1, n, sum, tot, a);
    res = min(res, solve(i + 1, n, sum + a[i], tot, a));
    return res;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    ll n; cin >> n;
    vector<ll> a(n);
    ll tot = 0;
    for (auto &x: a){
        cin >> x;
        tot += x;
    }
    
    cout << solve(0, n, 0, tot, a) << endl;
    //}
    return 0;
}