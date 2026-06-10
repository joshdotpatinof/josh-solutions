// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll n = s.size();
    ll max_len = 1;
    char prev_char = s[0];
    ll curr_len = 1;

    for (ll i = 1; i < n; ++i){
        if (s[i] == s[i-1]){
            curr_len++;
            max_len = max(max_len, curr_len);
        } else {
            curr_len = 1; // reset
        }
        prev_char = s[i];
    }
    cout << max_len << endl;
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