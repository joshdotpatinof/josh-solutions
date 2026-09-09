// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m, d; cin >> n >> m >> d;
    vector<ll> a(n);
    vector<ll> b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = a.size()-1, j = b.size()-1;
    while (i >= 0 and j >= 0){
        if (abs(a[i] - b[j]) <= d){
            cout << a[i] + b[j] << endl;
            return;
        }
        if (a[i] >= b[j]){
            i--;
        } else {
            j--;
        }
    }
    cout << -1 << endl;
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