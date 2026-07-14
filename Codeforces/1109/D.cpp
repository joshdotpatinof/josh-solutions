#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(ll n, ll m, vector<ll> &a, vector<ll> &b){
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i){
        pref[i] = pref[i-1] + a[i - 1];
    }
    sort(b.begin(), b.end());

    ll dp0 = 0;
    ll dp1 = -1e18;

    ll last_idx = 0;

    for (int i = 0; i < m; ++i) {
        ll curr_idx = b[i];

        ll normal_block_sum = pref[curr_idx] - pref[last_idx];
        ll flipped_block_sum = -normal_block_sum;

        ll next_dp0 = max(dp0 + normal_block_sum, dp1 + flipped_block_sum);
        ll next_dp1 = max(dp1 + normal_block_sum, dp0 + flipped_block_sum);

        ll choice_dp0 = max(dp1 + normal_block_sum, dp0 + flipped_block_sum);
        ll choice_dp1 = max(dp0 + normal_block_sum, dp1 + flipped_block_sum);

        dp0 = max(next_dp0, choice_dp0);
        dp1 = max(next_dp1, choice_dp1);

        last_idx = curr_idx;
    }

    ll rem_sum = pref[n] - pref[last_idx];
    ll ans = max(dp0 + rem_sum, dp1 + rem_sum);

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        ll n, m; cin >> n >> m;
        vector<ll> a(n);
        for (auto &x : a){
            cin >> x;
        }

        vector<ll> b(m);
        for (auto &x : b){
            cin >> x ;
        }
        solve(n, m, a, b);
    }
    return 0;
}