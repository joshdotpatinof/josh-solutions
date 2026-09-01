// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    if (n % 5 == 0){
        cout << n << endl;
        return;
    }

    int lower = n % 5;
    int higher = 5 - (n % 5);

    if (lower <= higher){
        cout << n - (n % 5) << endl;
    } else {
        cout << n + (5 - n % 5) << endl;
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