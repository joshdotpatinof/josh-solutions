// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    ll min_diff = LONG_LONG_MAX;
    for (int i = 0; i <= n - 3; ++i){
        ll diff = 753 - ((s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0') * 1);
        min_diff = min(min_diff, abs(diff));
        // cout << ((s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0') * 1) << endl;
    }
    cout << min_diff << endl;
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