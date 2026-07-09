// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b; cin >> a >> b;
    // a - 8 percent
    // b - 10 percent
    for (int i = 1; i <= 1009; ++i){
        if ((i * 8)/100 == a and (i*10)/100 == b){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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