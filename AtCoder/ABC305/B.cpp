// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    char p, q; cin >> p >> q;
    vector<int> a = {0, 3, 0, 1, 0, 4, 0, 1, 0, 5, 0, 9, 0};

    if (q < p){
        swap(p, q);
    }

    int l = (p - 'A') * 2;
    int r = (q - 'A') * 2;

    // cout << p << " " << q;

    // A - 0
    // B - 1 * 2 
    // C - 2 * 2
    // D - 3 * 2
    // E - 4 * 2
    // F - 5 * 2
    // G - 6 * 2
    int sum = 0;
    for (int i = l; i <= r; ++i){
        sum += a[i];
    }
    cout << sum << endl;
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