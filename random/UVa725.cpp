// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n; // 2 <= n <= 79

    for (int fghij = 1234; fghij <= (98765 / n); fghij++){
        int abcde = fghij * n;
        int tmp, used = (fghij < 10000);
        tmp = abcde; while (tmp)
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