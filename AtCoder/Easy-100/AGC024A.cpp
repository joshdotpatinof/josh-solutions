// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll const LIMIT = 1e18;

void solve() {
    ll a, b, c, k; cin >> a >> b >> c >> k;
    // takahashi = a
    // nakahashi = b
    
    // let d = a - b
    // let d = x
    // (A + x, A, B)
    // (A + B, A + B + x, 2A + x) -> d = ((A+B) - (A+B+X)) = -x
    
    if (abs(a-b) > LIMIT){
        cout << "Unfair\n";
        return;
    }
    
    if (k % 2 == 0){
        cout << a - b << endl;
        
    } else {
        cout << b - a << endl;
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