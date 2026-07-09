// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    ll max_len = 0;
    // find max_len decreasing subarray
    ll curr = a[0];
    ll count = 0;
    for (int i = 1; i < n; ++i){
        if (a[i] <= curr){
            count++;
        } else {
            count = 0; // reset
        }
        curr = a[i];
        max_len = max(max_len, count);
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
