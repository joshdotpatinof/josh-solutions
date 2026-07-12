// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> h(n);
    for (auto &x: h){
        cin >> x;
    }

    int max_at_i = h[0];
    for (int i = 1; i < n; ++i){
        if (h[i] < (max_at_i - 1)){
            cout << "No\n";
            return;
        }
        max_at_i = max(max_at_i, h[i]);
    }
    cout << "Yes\n";
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