// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, p, q; cin >> n >> p >> q;
    vector<int> D(n);
    for (auto &d : D) cin >> d;

    int mn = p;

    for (int i = 0; i < n; ++i){
        mn = min(mn, q + D[i]);
    }

    cout << mn << endl;
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