// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a){
        cin >> x;
    }
    int ans = -1;
    int curr_target = 1;
    for (int i = 0; i < n; ++i){
        if (curr_target == a[i]){
            curr_target++;
        } 
    }
    if (curr_target != 1){
        ans = n - (curr_target - 1);
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