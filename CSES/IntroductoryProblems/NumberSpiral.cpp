// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(ll y, ll x) {
    
    ll ans = 0;
    if (y > x){
        ll inner_area = (y-1)*(y-1);
        ans += inner_area;
        if (y % 2 == 0){
            // decr
            ans += ((2 * y) - x);
        } else {
            // incr
            ans += x;
        }   
    } else {
        ll inner_area = (x-1)*(x-1);
        ans += inner_area;
        if (x % 2 == 0){
            ans += y;
        } else {    
            ans += ((2 * x) - y);
        }
    }
    cout << ans << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        ll y, x; cin >> y >> x;
        solve(y, x);
    }
    return 0;
}