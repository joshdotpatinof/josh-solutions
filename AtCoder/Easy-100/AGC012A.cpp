// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<ll> a(3 * n);
    for (auto &x : a){
        cin >> x;
    }
    ll sum = 0;
    sort(a.begin(), a.end());
    // for (auto x : a){
    //     cout << x << " ";
    // }
    // cout << endl;
    for (int i = 3 * n - 2; i >= n; i -= 2){
        sum += a[i];
    }
    // 2
    // 5 2 8 5 1 5
    // 1 2 5 5 5 8

    cout << sum << endl;
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