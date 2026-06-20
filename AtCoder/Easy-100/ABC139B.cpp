// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b; cin >> a >> b;
    int num_of_empty = 1;    
    int ans = 0;
    while (num_of_empty < b){
        ans++;
        num_of_empty--;
        num_of_empty += a;
    }
    cout << ans << endl;
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