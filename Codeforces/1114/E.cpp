// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }
    if (n == 1){
        cout << a[0] << endl;
        return;
    }

    
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