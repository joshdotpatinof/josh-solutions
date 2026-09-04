// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll NEGINF = -1e9 + 10;

void solve() {
    int n; cin >> n;
    vector<pair<int, ll>> a(n);
    for (auto &x : a){
        cin >> x.first >> x.second;
    }
    // healthy = 0
    // upset = 1
    vector<vector<ll>> dp(n + 1, vector<ll>(2, NEGINF));
    dp[0][0] = 0;
    dp[0][1] = NEGINF;
    for (int i = 1; i <= n; ++i){
        int meal_type = a[i-1].first;
        ll contrib = a[i-1].second;
        
        if (meal_type == 0){ // 0 - antidotal
            dp[i][0] = max({dp[i][0], dp[i-1][0], dp[i-1][0] + contrib, dp[i-1][1] + contrib});
            dp[i][1] = max({dp[i][1], dp[i-1][1]});
        } else { // 1 - poisonous
            dp[i][0] = max({dp[i][0], dp[i-1][0]});
            dp[i][1] = max({dp[i][1], dp[i-1][1], dp[i-1][0] + contrib});
        }
    }
    ll max_ans = max({0LL, dp[n][0], dp[n][1]});
    cout << max_ans << endl;
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