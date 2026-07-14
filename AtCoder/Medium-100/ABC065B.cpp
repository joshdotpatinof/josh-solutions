// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a){
        cin >> x;
    }

    int ans = 0;
    int lighten_up = 1;
    while (lighten_up != 2){

        int can_press = a[lighten_up-1]; 

        if (ans > n){
            cout << -1 << endl;
            return;
        }
        ans++;

        lighten_up = can_press;
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