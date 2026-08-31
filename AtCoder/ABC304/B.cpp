// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    if (n <= 1e3 - 1){
        cout << n << endl;
    } else if (n <= 1e4 - 1){
        n /= 10;
        n *= 10;
        cout << n << endl;
    } else if (n <= 1e5 - 1){
        n /= 100;
        n *= 100;
        cout << n << endl;
    } else if (n <= 1e6 - 1){
        n /= 1000;
        n *= 1000;
        cout << n << endl;
    } else if (n <= 1e7 - 1){
        n /= 10000;
        n *= 10000;
        cout << n << endl;
    } else if (n <= 1e8 - 1){
        n /= 100000;
        n *= 100000;
        cout << n << endl;
    } else{
        n /= 1000000;
        n *= 1000000;
        cout << n << endl;
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