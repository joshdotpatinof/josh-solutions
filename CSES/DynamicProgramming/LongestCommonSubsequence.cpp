// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (auto &x : a) cin >> x;
    for (auto &y: b) cin >> y;
    // dp[i][j] = holds the length of the longest common subsequence of up to the ith integer of a and up to the jth integer of b
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; ++i){
        dp[i][0] = 0;
    }

    for (int j = 0; j <= m; ++j){
        dp[0][j] = 0;
    }

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (a[i-1] == b[j-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    int lengthOfLCS = dp[n][m];
    // cout << lengthOfLCS << endl;
    // once you have the length, reconstruct an answer
    vector<int> LCS;
    int i = n, j = m;
    while (i > 0 and j > 0){
        if (a[i-1] == b[j-1]){
            LCS.push_back(a[i-1]);
            i--;
            j--;
        } else if (dp[i-1][j] > dp[i][j-1]){
            i--;
        } else {
            j--;
        }
    }

    cout << lengthOfLCS << endl;
    for (int i = lengthOfLCS - 1; i >= 0; --i){
        cout << LCS[i] << " ";
    }
    cout << endl;
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