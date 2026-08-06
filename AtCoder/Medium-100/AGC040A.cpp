// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll ans = 0;
    int n = s.size();
    vector<ll> a(n + 1, 0);
    for (int i = 0; i < n; ++i){
        if (s[i] == '<'){
            a[i + 1] = max(a[i + 1], a[i] + 1);
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if (s[i] == '>'){
            a[i] = max(a[i], a[i + 1] + 1);
        }
    }

    for (int i = 0; i <= n; ++i){
        ans += a[i];
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