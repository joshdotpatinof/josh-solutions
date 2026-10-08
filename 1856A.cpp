// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] > a[i+1]){
            ans = max(ans, a[i]);
        }
    }    

    cout << ans << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}