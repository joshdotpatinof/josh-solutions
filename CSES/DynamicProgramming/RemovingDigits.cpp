// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MAX = 1e9;

void solve() {
    int n; cin >> n;
    // dp[i] = The minimum number of steps to make n == 0
    vector<int> dp(n+1, MAX);
   
    dp[n] = 0;
    for (int i = n; i >= 0; i--){
        if (dp[i] == MAX) continue;

        vector<int> digits;
        int tmp = i;
        while (tmp != 0){
            digits.push_back(tmp % 10);
            tmp /= 10;
        }

        for (auto d: digits){
            if (i - d >= 0){
                dp[i - d] = min(dp[i - d], dp[i] + 1);
            }
        }
    }

    cout << dp[0] << endl;
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