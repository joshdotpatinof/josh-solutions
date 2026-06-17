// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> h(n);
    for (auto &x: h){
        cin >> x;
    }
    vector<ll> t(m);
    for (auto &x: t){
        cin >> x;
    }
    
    multiset<ll> tix;
    for (int i = 0; i < n; ++i){
        tix.insert(h[i]);
    }
    vector<ll> ans(m);
    for (int i = 0; i < m; ++i){
        ll tmp = t[i];
        multiset<ll>::iterator itr = tix.upper_bound(tmp);
        if (itr == tix.begin()){
            ans[i] = -1;
        } else {
            itr--;
            ans[i] = (*itr);
            tix.erase(itr);
        }
    }

    for (auto x: ans){
        cout << x << endl;
    }
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