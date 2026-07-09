// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int t, a; cin >> t >> a;
    vector<int> h(n);
    for (auto &x: h){
        cin >> x;
    }
    int ans = -1;
    float closest_dist = FLT_MAX;
    for (int i = 0; i < n; ++i){
        float curr = t - h[i] * (0.006);
        if (abs(curr - a) < closest_dist){
            closest_dist = abs(curr-a);
            ans = i;
        }
    }
    cout << ans + 1 << endl;
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