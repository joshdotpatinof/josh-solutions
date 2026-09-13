// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 998244353;

ll power(ll base, ll exp){
    ll res = 1;
    base %= MOD;
    while (exp > 0){
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, MOD - 2);
}

void solve(int n, vector<int> &a) {
    // for (auto x : a){
        //     cout << x << " ";
        // }
    if (n == 1){
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());

    vector<ll> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suf[i] = (suf[i + 1] + a[i]) % MOD;
    }

    ll fact_n_minus_1 = 1;
    for (int i = 1; i <= n - 1; ++i) {
        fact_n_minus_1 = (fact_n_minus_1 * i) % MOD;
    }

    ll total_cost = 0;

    for (int i = 0; i < n - 1; ++i) {
        ll choices = n - 1 - i;
        ll inv_choices = modInverse(choices);
        ll tree_count = (fact_n_minus_1 * inv_choices) % MOD;

        ll sum_parent_vals = suf[i + 1];
        ll child_contrib = (choices * a[i]) % MOD;
        ll diff = (sum_parent_vals - child_contrib + MOD) % MOD;

        ll term = (tree_count * diff) % MOD;
        total_cost = (total_cost + term) % MOD;
    }

    cout << total_cost << "\n";
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        solve(n, a);
    }
    return 0;
}