// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    ll x = 0;
    ll max_x = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] == 'I'){
            x++;
        } else if (s[i] == 'D') {
            x--;
        }
        max_x = max(max_x, x);
    }
    cout << max_x << endl;
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