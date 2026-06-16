// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(ll a, ll b) {

    if ((2*a - b) % 3 or (2*a - b) < 0 or (2*b - a) % 3 or (2*b - a) < 0){
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        solve(a, b);
    }
    return 0;
}