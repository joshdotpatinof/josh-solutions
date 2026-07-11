// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x; cin >> x;
    vector<pair<int, int>> a = {{100, 1e6}, {101, 1e6}, {102, 1e6}, {103, 1e6}, {104, 1e6}, {105, 1e6}};
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    
    for (auto [val, amt] : a){
        for (int j = x; j >= 0; --j){
            if (dp[j]){
                for (int cnt = 1; cnt <= amt; ++cnt){
                    int nxt_price = j + (cnt * val);
                    if (nxt_price <= x){
                        dp[nxt_price] = 1;
                    } else {
                        break;
                    }
                }
            }

        }
    }

    // for (auto x: dp){
    //     cout << x << " ";
    // }
    // cout << endl;

    cout << dp[x] << endl;
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