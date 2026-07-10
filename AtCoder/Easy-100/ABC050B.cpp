// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> t(n);
    int sum = 0;
    for (auto &x : t){
        cin >> x;
        sum += x;
    }
    int m; cin >> m;
    vector<pair<int, int>> p(m);
    for (auto &x : p){
        cin >> x.first >> x.second;
    }

    for (int i = 0; i < m; ++i){
        auto [x, y] = p[i];
        cout << sum + y - t[x-1] << endl;
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