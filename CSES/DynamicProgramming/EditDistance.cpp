// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MAX = 1e6;

void solve() {
    string s; cin >> s;
    string t; cin >> t;

    int n = s.size();
    int m = t.size();
    // let dp[i][j] = edit distance between first i characters of s and first j characters of t
    vector<vector<int>> dp(n + 1, vector<int>(m+1, MAX));
    
    for (int i = 0; i <= n; ++i){
        dp[i][0] = i;
    }

    for (int j = 0; j <= m; ++j){
        dp[0][j] = j;
    }

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            char x = s[i-1];
            char y = t[j-1];

            if (x == y){
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = dp[i-1][j-1] + 1;
            }

            dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
            dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
        }
    }

    cout << dp[n][m] << endl;
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