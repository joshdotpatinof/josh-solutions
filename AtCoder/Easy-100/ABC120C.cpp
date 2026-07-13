// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();

    if (n == 1){
        cout << 0 << endl;
        return;
    }
    int c0 = 0;
    int c1 = 0;

    for (int i = 0; i < n; ++i){
        if (s[i] == '1'){
            c1++;
        } else {
            c0++;
        }
    }
    cout << 2 * min(c0, c1) << endl;
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

// 1[10]1[10][10][0[0[10]1]1]

// [1[1[01][1[01]0]0][01]0]11
