// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ull ans = 0;
    vector<int> a(64);
    for (int i = 0; i < 64; ++i){
        cin >> a[i];
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < 64; ++i){
        ans *= 2;
        ans += a[i];
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