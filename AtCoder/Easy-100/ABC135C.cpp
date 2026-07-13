// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n + 1);
    for (auto &x : a){
        cin >> x;
    }
    vector<ll> b(n);
    for (auto &x : b){
        cin >> x;
    }   
    ll monsters = 0;
    for (ll i = 0; i < n; ++i){
        ll curr = min(a[i], b[i]);
        monsters += curr;
        ll rem_pow = b[i] - curr;
        ll next = min(a[i + 1], rem_pow);
        monsters += next;
        a[i + 1] -= next;
    }

    cout << monsters << endl;
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