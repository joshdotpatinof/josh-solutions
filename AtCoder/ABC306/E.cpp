// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);


void balance(ll &s, const int k, multiset<int> &x, multiset<int> &y){
    while (x.size() < k and !y.empty()){
        auto iy = y.end();
        iy--;
        x.insert((*iy));
        s += (*iy);
        y.erase(iy);
    }

    if (x.empty() or y.empty()) return;
    while (true){
        auto ix = x.begin();
        auto iy = y.end(); iy--;
        int ex =(*ix);
        int ey =(*iy);
        if (ex >= ey) break;
        s += (ey-ex);
        x.erase(ix);
        y.erase(iy);
        x.insert(ey);
        y.insert(ex);
    }
}

void add(ll &s, const int k, int v, multiset<int> &x, multiset<int> &y){
    y.insert(v);
    balance(s, k, x, y);
}

void erase(ll &s, const int k, int v, multiset<int> &x, multiset<int> &y){
    auto ix = x.find(v);
    if (ix != x.end()) {
        s -= v;
        x.erase(ix);
        balance(s, k, x, y);
    } else {
        auto iy = y.find(v);
        if (iy != y.end()) {
            y.erase(iy);
        }
        balance(s, k, x, y);
    }
}

void solve() {
    int n, k, q; cin >> n >> k >> q;
    ll s = 0;
    vector<int> a(n, 0);
    multiset<int> x, y;
    for (int i = 0; i < n; ++i) {
        add(s, k, a[i], x, y);
    }

    for (int i = 0; i < q; ++i){
        int p, w; cin >> p >> w;
        p--;
        erase(s, k, a[p], x, y);
        add(s, k, w, x, y);
        a[p] = w;
        cout << s << endl;
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