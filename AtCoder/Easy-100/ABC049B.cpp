// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int h, w; cin >> h >> w;
    vector<string> g(h);
    for (auto &x : g){
        cin >> x;
    }

    for (auto x: g){
        cout << x << '\n' << x << '\n';
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