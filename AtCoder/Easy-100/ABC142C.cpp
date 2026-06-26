// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }

    vector<ll> ans(n);

    for (int i = 0; i < n; ++i){
        ans[a[i]-1]= i + 1;
    }

    for (auto x: ans){
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