// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    // dp[i] = the number of ways to fill all 3 x i tiles 
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i){
        if (i % 2 == 0){
            dp[i] = 2 * dp[i - 2];
        } else {
            dp[i] = 0;
        }
    }
    cout << dp[n] << endl;
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