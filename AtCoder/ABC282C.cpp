// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] == '"'){
            cnt++;
        } else {
            if ((cnt % 2 == 0) and s[i] == ','){
                s[i] = '.';
            }
        }
    }
    cout << s << endl;
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