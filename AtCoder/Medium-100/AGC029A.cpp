// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll n = s.size();
    ll ans = 0;
    ll count_black = 0;
    for (ll i = 0; i < n; ++i){
        if (s[i] == 'B'){
            count_black++;
        } else {
            ans += count_black;
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
// BBW
// BWB
// WBB

// BWBWBW



