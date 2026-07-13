// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int m = max(a, max(b, c));
    int x;
    if (((a + b + c) % 2 == 0 and m % 2 == 0) or ((a + b + c) % 2 == 1 and m % 2 == 1)){
        x = m;
    }  else {
        x = m + 1;
    }

    cout << (3 * x - (a + b + c)) / 2 << endl;
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