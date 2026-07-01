// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll num_of_transitions = 0;
    for (ll i = 0; i < n - 1; ++i){
        if (s[i] != s[i+1]){
            num_of_transitions++;
        }
    }

    ll ans = -1;
    if (num_of_transitions > 1){
        ans = 1;
    } else if (num_of_transitions == 1){
        ans = 2;
    } else {
        ans = 1;
    }
    cout << ans << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}