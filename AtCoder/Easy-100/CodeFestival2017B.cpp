// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }

    ll tot_prods = 1;

    ll odd_prods = 1;
    for (int i = 0; i < n; ++i){
        tot_prods *= 3;
        if ((a[i] & 1) == 0){
            odd_prods *= 2;
        } else {
            odd_prods *= 1;
        }   
    }
    cout << tot_prods - odd_prods << endl;
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