// written by josh.patinof June 4, 2026
// B. Fence -https://codeforces.com/problemset/problem/363/B
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(ll n, ll k, vector<ll> &a){
    ll s = 0;
    for (ll i = 0; i < k; i++){
        s += a[i];
    }
    ll min_sum = s;
    ll ans = 0;

    for (ll i = k; i < n; ++i){
        s += a[i] - a[i-k];
        if (s < min_sum){
            min_sum = s;
            ans = i - k + 1;
        }
    }

    cout << ans + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    solve(n, k, a);
    return 0;
}