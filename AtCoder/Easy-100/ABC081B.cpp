// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> freq(n, 0);
    for (auto &x: a){
        cin >> x;
    }
    for (ll i = 0; i < n; ++i){
        ll num = a[i];
        ll counts = 0;
        while (true){
            if (num % 2 == 0){
                num /= 2;
                counts++;
            } else {
                break;
            }
        }
        freq[i] = counts;
    }

    sort(freq.begin(), freq.end());
    cout << freq[0] << endl;

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