// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int d, n; cin >> d >> n;
    // d = 0 (100)^0
    // d = 1 (100)^1
    // d = 2 (100)^2
    ll num;
    if (d == 0){
        num = 1;
    } else if (d == 1) {
        num = 100;
    } else {
        num = 10000;
    }

    ll candidate = num * n;
    if (n == 100){
        candidate = num * (n + 1);
    }   
    cout << candidate << endl;
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