// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    vector<ll> b(m);
    for (auto &x: b){
        cin >> x;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll count = 0;

    ll i = 0, j = 0;

    while (i < n and j < m){
        if (abs(a[i] - b[j]) <= k){
            count++;
            i++;
            j++;
        } else {
            if ((a[i] - b[j]) > k){
                j++;
            } else {
                i++;
            }
        }
    }
    cout << count << endl;
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