// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    while (cin >> n and n){
        vector<ll> a(n);
        for (auto &x : a){
            cin >> x;
        }
        
        ll sum = 0;
        ll ans = 0;
    
        for (int i = 0; i < n; ++i){
            sum += a[i];
            ans = max(ans, sum);
            if (sum < 0) sum = 0;
        }

        if (ans == 0){
            cout << "Losing streak.\n";
        } else {
            cout << "The maximum winning streak is " << ans << "." << endl;
        }
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