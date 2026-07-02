// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int x = x2 - x1;
    int y = y2 - y1;
    
    int x3 = x2 - y, y3 = y2 + x, x4 = x1 - y, y4 = y1 + x;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
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