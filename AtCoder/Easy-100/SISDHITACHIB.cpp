// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll A, B, M; cin >> A >> B >> M;
    vector<ll> a(A);
    vector<ll> b(B);
    vector<tuple<ll, ll, ll>> m(M);
    ll smallest_a = LONG_LONG_MAX;
    ll smallest_b = LONG_LONG_MAX;
    for (auto &x: a){
        cin >> x;
        smallest_a = min(smallest_a, x);
    }
    for (auto &y: b){
        cin >> y;
        smallest_b = min(smallest_b, y);
    }
    for (auto &z: m){
        cin >> get<0>(z) >> get<1>(z) >> get<2>(z);
    }
    
    sort(m.begin(), m.end());
    ll min_cost = smallest_a + smallest_b; // choose the smallest normally

    for (int i = 0; i < M; ++i){
        min_cost = min(min_cost, a[get<0>(m[i])-1] + b[get<1>(m[i])-1] - get<2>(m[i]));
    }
    cout << min_cost << endl;
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