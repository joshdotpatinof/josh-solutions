// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    vector<string> g;
    while (cin >> s){
        g.push_back(s);
        
    }
    int n = g.size();
    int m = g[0].size();
    vector<vector<int>> a(n, vector<int>(m));
    a[0][0] = (g[0][0] == '1');
    for (int i = 0; i < n; ++i){
        
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    bool first = true;
    while (t--) {
        if (!first) {
            cout << "\n";
        }
        first = false;
        solve();
    }
    return 0;
}