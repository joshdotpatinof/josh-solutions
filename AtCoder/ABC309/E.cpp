// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<int> p(n, -1);
    for (int i = 1; i < n; ++i){
        cin >> p[i];
        p[i]--;
    }
    // dp[i] = the number of next generations of person i are covered
    vector<int> dp(n, -1);
    for (int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        x--;
        dp[x] = max(dp[x], y);
    }

    for (int i = 1; i < n; ++i){
        dp[i] = max(dp[i], dp[p[i]]-1);
    }

    int ans = 0;
    for (int i = 0; i < n; ++i){
        if (dp[i] >= 0) ans++;
    }

    // for (auto x: dp){
    //     cout << x << " ";
    // }
    // cout << endl;
    cout << ans << endl;
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