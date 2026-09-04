// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b; cin >> a >> b;
    if (b <= 3){
        if (a <= 3){
            cout << "Yes\n";
            return;
        }
    } else if (b <= 6){
        if (a > 3 and a <= 6){
            cout << "Yes\n";
            return;
        }
    } else if (b <= 9){
        if (a > 6 and a <= 9){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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