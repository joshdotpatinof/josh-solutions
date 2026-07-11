// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void query(int i, int j){
    cout << "? " << i << " " << j << endl;
}

void answer(int ans){
    cout << "! " << ans << endl;
}

void solve() {
    int n; cin >> n;
    int ans = 0;
    int r = 0;
    for (int l = 1; l <= n; ++l){
        if (r < l){
            r = l;
        }
        while (r < n){
            query(l, r + 1);
            string res; cin >> res;
            if (res == "Yes"){
                r++;
            } else {
                break;
            }
        }
        ans += (r - l);
    }

    answer(ans);
}

int main() {
    // fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    //}
    return 0;
}