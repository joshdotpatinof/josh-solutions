// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 1e18;

void solve() {
    ll x, y, z; cin >> x >> y >> z;
    string s; cin >> s;
    int n = s.size();
    // 0 - caps is off
    // 1 - caps is on
    vector<vector<ll>> dp(n+1, vector<ll>(2,MAX));

    dp[0][0] = 0;
    // dp[0][1] = MAX; 
    for (int i = 1; i <= n; ++i){
        if (s[i-1] == 'A'){
            // caps is off
            dp[i][0] = min(dp[i-1][0]+y, dp[i-1][1]+z+y);
            // caps is on
            dp[i][1] = min(dp[i-1][0]+z+x, dp[i-1][1]+x);
        } else { // s[i-1] == 'a'
            // caps is off
            dp[i][0] = min(dp[i-1][0]+x, dp[i-1][1]+z+x);
            // caps is on
            dp[i][1] = min(dp[i-1][0]+z+y, dp[i-1][1]+y);
        }  
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
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