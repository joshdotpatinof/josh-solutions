// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int w, h; cin >> w >> h;
    int n; cin >> n;
    vector<pair<int, int>> strawb(n);
    for (auto &x : strawb){
        cin >> x.first >> x.second;
    }
    int a; cin >> a;
    vector<int> A(a);
    for (auto &x : A){
        cin >> x;
    }
    int b; cin >> b;
    vector<int> B(b);
    for (auto &x : B){
        cin >> x;
    }

    int min_ans = INT_MAX;
    int max_ans = -1;

    unordered_map<ll, int> mp;

    for (auto [p, q] : strawb){
        int c = lower_bound(A.begin(), A.end(), p) - A.begin();
        int r = lower_bound(B.begin(), B.end(), q) - B.begin();
        ll idx = (ll)r * (a + 1) + c;
        mp[idx]++;
    }

    for (auto [x, y] : mp){
        min_ans = min(y, min_ans);
        max_ans = max(y, max_ans);
    }
    if (mp.size() < (ll)(a + 1) * (b + 1)){
        min_ans = 0;
    }
    cout << min_ans << " " << max_ans << endl;
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