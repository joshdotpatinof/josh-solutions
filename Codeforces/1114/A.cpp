// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> a(3);
    for (auto &x : a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    cout << min(a[2] - a[1], a[1] - a[0]) << endl;
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