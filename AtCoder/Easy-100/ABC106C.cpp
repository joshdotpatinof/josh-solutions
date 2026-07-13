// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll k; cin >> k;
    // 5 x 10^15
    int n = s.size();
    ll where_1_is = -1;
    for (ll i = 0; i < n; ++i){
        if (s[i] == '1'){
            where_1_is = i;
        } else {
            break;
        }
    }
    if (where_1_is == -1){ // first char is not 1
        cout << s[0] << endl;
        return;
    }

    if (k <= where_1_is + 1){
        cout << 1 << endl;
    } else { // k > where_1_is
        if (where_1_is + 1 < n){
            cout << s[where_1_is + 1] << endl;
        } else {
            cout << s[0] << endl;
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

// 1214
// 4
