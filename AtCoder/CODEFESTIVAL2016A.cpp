// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n; ++i){
        if (i == 4){
            cout << ' ';
        }
        cout << s[i];

        if (i == 11){
            cout << endl;
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