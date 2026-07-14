// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll bin_expo(ll base, ll exp){
    if (exp == 0){
        return 1;
    }
    ll ans = bin_expo(base, exp / 2);
    if (exp % 2 == 0){
        return ans * ans;
    } else {
        return base * ans * ans;
    }
}

void solve() {
    ll n, k; cin >> n >> k;
    if (n == 0){
        cout << 0 << endl;
        return;
    }

    ll ans = k * bin_expo(k - 1, n - 1);
    cout << ans << endl;
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