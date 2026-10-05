// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int mx = -1;
    vector<int> p(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i){
        cin >> p[i];
        mx = max(mx, p[i]);
        mp[p[i]]++;
    }

    if (mx == p[0] and mp[mx] == 1){
        cout << 0 << endl;
    } else if (mx == p[0] and mp[mx] > 1){
        cout << 1 << endl;
    } else {
        int diff = mx - p[0];
        cout << diff + 1 << endl;
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