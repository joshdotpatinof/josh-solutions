// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll maxSide = 0;
    for (auto &x : a){ 
        cin >> x;
        sum += x;
        maxSide = max(maxSide, x);
    }
    ll cap_on_triangles = sum / 3;
    // min of the absolute cap and the case where one side dominates
    cout << min(cap_on_triangles, sum - maxSide) << endl;
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