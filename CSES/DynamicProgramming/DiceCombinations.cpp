// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> dp(n+1, 0); 
    dp[0] = 1;
    // let dp[i] = number of ways to create sum i using numbers [1..6]
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= 6; ++j){
            if (i - j >= 0){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }

    // for (int i = 0 ; i <= n; ++i){
    //     cout << i << ": " << dp[i] << endl; 
    // }
    cout << (dp[n] % MOD + MOD) % MOD << endl;
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