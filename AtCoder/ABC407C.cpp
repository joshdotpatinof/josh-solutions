// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    ll ans = 0;
    for (int i = n-1; i >= 0; i--){
        ll v = s[i] - '0';
        ll u = ((i < n-1) ? (s[i+1] - '0') : 0);
        ll b = (10 + v - u) % 10;
        ans += b;
    }
    
    cout << ans + n << endl;
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