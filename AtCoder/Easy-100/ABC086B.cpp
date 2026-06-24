// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string a, b; cin >> a >> b;
    string res = a + b;

    int n = res.size();
    ll num = 0;
    for (int i = 0; i < n; ++i){
        num *= 10;
        num += (res[i] - '0');
    }

    ll ans = -1;
    ll lo = 1, hi = num;

    while (lo <= hi){
        ll mi = lo + (hi - lo) / 2;
        if ((mi * mi) >= num){
            hi = mi - 1;
            ans = mi;
        } else {
            lo = mi + 1;
        }


    }
    
    if (ans * ans == num){
        cout << "Yes\n";
    } else {
        cout << "No\n";
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