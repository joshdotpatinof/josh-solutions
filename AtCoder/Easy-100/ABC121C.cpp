// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> a(n);
    for (auto &[x, y]: a){
        cin >> x >> y;
    }

    sort(a.begin(), a.end());
    ll price = 0;
    int i = 0;
    while (m > 0){
        auto [yen, cans] = a[i];
        // ang makuha
        ll target = min(cans, m);
        
        m -= target;
        price += (target * yen);

        cans -= target;
        if (cans <= 0){
            i++;
        }
    }
    // cout << endl;
    // for (auto [x, y]: a){
    //     cout << x << " " << y << endl;
    // }

    cout << price << endl;
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