// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> a(n);
    map<int, int> mp;
    for (auto &[x, y]: a){
        cin >> x >> y;
        mp[x] = max(mp[x], y);
    }

    for (int i = 1; i <= m; ++i){
        if (mp[i] == 0){
            cout << -1 << " ";
        } else {
            cout << mp[i] << " ";
        }
    }
    cout << endl;
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