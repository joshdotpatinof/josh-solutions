// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string t; cin >> t;
    for (int i = 0; i < n; ++i){
        char x = s[i];
        char y = t[i];
        if (x != y){
            if (x == '1' and y == 'l'){
                continue;
            }
            if (x == 'l' and y == '1'){
                continue;
            }

            if (x == '0' and y == 'o'){
                continue;
            }

            if (x == 'o' and y == '0'){
                continue;
            }

            cout << "No\n";
            return;
        }
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