// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for (auto &c: a){
        cin >> c;
    }

    sort(a.begin(), a.end());

    ll i = 0, j = n - 1;
    ll count = 0;
    while (i <= j){
        // 4 10
        // 2 3 7 9

        if (a[i] + a[j] <= x){
            i++;
            j--;
            count++;
        } else {
            count++;
            j--;
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