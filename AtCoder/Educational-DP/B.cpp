// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int cost(int a, int b){
    return abs(a - b);
}

int solve(int i, vector<int> &h, vector<int> &dp, int k) {
    if (i == 0){
        return 0;
    }

    if (dp[i] != -1){
        return dp[i];
    }

    int res = solve(i - 1, h, dp, k) + cost(h[i], h[i - 1]);
    
    for (int j = 2; j <= k; ++j){
        if (i > (j - 1)){
            res = min(res, solve(i - j, h, dp, k) + cost(h[i], h[i - j]));
        }
    }

    dp[i] = res;
    return dp[i];
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    int n, k; cin >> n >> k;
    vector<int> h(n);
    for (auto &x: h){
        cin >> x;
    }
    vector<int> dp(n, -1);
    cout << solve(n - 1, h, dp, k) << endl;
    //}
    return 0;
}