// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<vector<int>> g(n, vector<int> (n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> g[i][j];
        }
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