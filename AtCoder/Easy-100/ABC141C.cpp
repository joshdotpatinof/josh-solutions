// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, k, q; cin >> n >> k >> q;
    vector<ll> players(n, 0);
    for (int i = 0; i < q; ++i){
        ll query; cin >> query;
        players[query-1]++;
    }
    // for (auto x: players){
    //     cout << q - x << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; ++i){
        if ((k - abs(q - players[i])) <= 0){
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
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