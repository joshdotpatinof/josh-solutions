// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e9;

void solve() {
    int a, b; cin >> a >> b;
    // dp[i][j] = minimum number of cuts required to cut a rectangle size i x j into squares
    vector<vector<int>> dp(a+1, vector<int>(b+1, INF));
    for (int i = 0; i <= a; ++i){
        for (int j = 0; j <= b; ++j){
            if (i == j){
                dp[i][j] = 0; // alr a square
                continue;
            }
            for (int k = 1; k < j; ++k){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k]+1);
            }

            for (int k = 1; k < i; ++k){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j]+1);
            }

        }
    }


    cout << dp[a][b] << endl;
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