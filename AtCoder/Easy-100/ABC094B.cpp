// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m, x; cin >> n >> m >> x;
    ll min_cost = LONG_LONG_MAX;
    ll cost_going_to_zero = 0;
    ll cost_going_to_n = 0;
    vector<ll> a(m);
    for (auto &y: a){
        cin >> y;
        if (y < x){
            cost_going_to_zero++;
        } else {
            cost_going_to_n++;
        }
    }

    min_cost = min(min_cost, min(cost_going_to_zero, cost_going_to_n));
    cout << min_cost;
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

// 5 3 3
// 1 2 4
