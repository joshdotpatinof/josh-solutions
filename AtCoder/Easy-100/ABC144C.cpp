// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    ll n; cin >> n;
    ll ans = -1;
    for (ll a = 1; a * a <= n; ++a){
        if (n % a == 0){
            ll b = n / a;
            ll curr = a + b - 2;
            if (ans == -1 or curr < ans){
                ans = curr;   
            }
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