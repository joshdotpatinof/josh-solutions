// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, d, x;
    cin >> n >> d >> x;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }
    ll ans = x;
    for (int i = 0; i < n; ++i){
        if (a[i] >= d){
            ans++;
        } else {
            ll cnt = 0;
            ll idx = 0;
            while (true){
                if ((idx * a[i]) + 1 <= d){
                    idx++;
                    cnt++;
                } else {
                    break;
                }
            }
            ans += cnt;
        }
    }
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