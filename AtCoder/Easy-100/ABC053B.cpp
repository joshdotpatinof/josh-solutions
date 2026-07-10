// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    int idx_a = -1;
    for (int i = 0; i < n; ++i){
        if (s[i] == 'A'){
            idx_a = i;
            break;
        }
    }
    int idx_z = -1;
    for (int i = n - 1; i > idx_a; --i){
        if (s[i] == 'Z'){
            idx_z = i;
            break;
        }
    }

    cout << (idx_z + 1) - idx_a << endl;
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