// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    ll count = 0;
    for (ll i = 0; i < n; ++i){
        if ((x - a[i]) >= 0){
            count++;
            x -= a[i];
        } else {
            break;
        }
    }

    if (count == n and x > 0){
        count--;
    }
    cout << count << endl;
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