// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<int> A(n);
    vector<int> B(m);
    for (auto &a : A) cin >> a;
    for (auto &b : B) cin >> b;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans = 1e9+1;
    int lo = 0, hi = 1e9 + 1;
    while (lo <= hi){
        int x = lo + (hi - lo) / 2;
        auto sellers_itr = upper_bound(A.begin(), A.end(), x);
        auto buyers_itr = lower_bound(B.begin(), B.end(), x);
        int sellers = sellers_itr - A.begin();
        int buyers = B.end() - buyers_itr;
        if (sellers >= buyers){
            ans = x;
            hi = x - 1;
        } else {
            lo = x + 1;
        }
    }
    cout << ans << endl;
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