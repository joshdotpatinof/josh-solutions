// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll d = s.length();
    ll y = 1;
    for (ll i = 0; i < d; ++i){
        y *= 10;
    }
    y++;
    cout << y << '\n';
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