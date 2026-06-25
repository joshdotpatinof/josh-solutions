// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> d(n);
    for (auto &x: d){
        cin >> x;
    }   
    // find how many Ks that divide the array d into two groups
    // ARCs d >= K
    // ABCs d < K
    sort(d.begin(), d.end());
    ll mx = n / 2;
    ll mn = mx - 1;
    cout << (d[mx] - (d[mn] + 1)) + 1 << endl;
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

// 6
// 9 1 4 4 6 7


// sorted -> [1 4 4] [6 7 9]