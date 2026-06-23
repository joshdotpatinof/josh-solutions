// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m, c; cin >> n >> m >> c;
    vector<ll> b(m);
    for (auto &x: b){
        cin >> x;
    }

    vector<vector<ll>> a(n, vector<ll>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    ll count = 0;
    for (int i = 0; i < n; ++i){
        ll sum = 0;
        for (int j = 0; j < m; ++j){
            sum += (a[i][j] * b[j]);
        }

        count += ((sum + c) > 0);
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