// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.rbegin(), a.rend());
    ll alice = 0;
    ll bob = 0;

    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;
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