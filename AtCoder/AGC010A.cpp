// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (auto &x : a){
        cin >> x;
        sum += x;
    }
    if (sum % 2 == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
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