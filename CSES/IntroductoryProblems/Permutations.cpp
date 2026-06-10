// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;

    if (n == 1){
        cout << 1 << endl;
        return;
    }
    
    if (n <= 3){
        cout << "NO SOLUTION\n";
        return;
    }

    vector<ll> odd;
    vector<ll> even;

    for (ll i = 1; i <= n; ++i){
        if (i % 2 == 0){
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }

    for (auto x: even){
        cout << x << " ";
    }
    for (auto x: odd){
        cout << x << " ";
    }
    cout << endl;
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