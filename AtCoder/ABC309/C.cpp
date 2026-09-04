// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    ll sum = 0;
    for (auto &x : p){
        cin >> x.first >> x.second;
        sum += x.second;
    }
    
    if (sum <= k){ // first day is answer, sum already <= k
        cout << 1 << endl;
        return;
    }
    sort (p.begin(), p.end());
    
    for (int i = 0; i < n; ++i){
        sum -= p[i].second;
        if (sum <= k){
            cout << p[i].first + 1 << endl;
            return;
        }
    }
    cout << p[n-1].second + 1 << endl; // this is the ans, since 0 <= k 
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