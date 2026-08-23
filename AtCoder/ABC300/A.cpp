// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, a, b; cin >> n >> a >> b;
    for (int i = 0; i < n; ++i){
        int c; cin >> c;
        if (a + b == c){
            cout << i + 1 << endl;
            return;
        }
    }
    // Always has an answer
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