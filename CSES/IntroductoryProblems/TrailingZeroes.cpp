// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(ll n) {
    ll tmp = n;
    ll ans = 0;
    while (true){
        if (tmp == 0){
            break;
        }
        ans += (tmp / 5);
        tmp /= 5;
    }
    cout << ans << endl;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    ll n; cin >> n;
    solve(n);
    //}
    return 0;
}