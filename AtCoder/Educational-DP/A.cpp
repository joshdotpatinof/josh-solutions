// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e4 + 10;

int cost(int a, int b){
    return abs(a - b);
}

int solve(int i, vector<int> &h, vector<int> &dp) {
    if (i == 0){
        return 0;
    }

    if (dp[i] != -1){
        return dp[i];
    }

    int res = solve(i - 1, h, dp) + cost(h[i], h[i-1]);

    if (i > 1){
        res = min(res, solve(i - 2, h, dp) + cost(h[i], h[i-2]));
    }
    dp[i] = res;
    return dp[i];
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    int n; cin >> n;
    vector<int> h(n);
    for (auto &x : h){
        cin >> x;
    }
    vector<int> dp(n, -1);
    cout << solve(n - 1, h, dp) << endl;
    //}
    return 0;
}