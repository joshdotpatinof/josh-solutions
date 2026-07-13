// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll x, y; cin >> x >> y;
    ll len = 0;
    ll curr = x;
    while (curr <= y){
        // cout << curr << endl;
        curr += curr;
        len++;
    }
    cout << len << endl;
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