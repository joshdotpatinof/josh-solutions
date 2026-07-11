// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x; cin >> x;
    // b^p, b >= 1, p >= 2
    vector<bool> e(x + 1);
    e[1] = 1;
    for (int b = 2; b <= x; ++b){
        int i = b * b;
        while (i <= x){
            e[i] = 1;
            i *= b;
        }
    }

    for (int i = x; i >= 1; --i){
        if (e[i]){
            cout << i << endl;
            return;
        }
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