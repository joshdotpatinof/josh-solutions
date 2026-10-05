// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<int> p(n + 1, -1);
    for (int i = 0; i < m; ++i){
        int a, b; cin >> a >> b;
        p[b] = a;
    }
    unordered_set<int> strongest;
    for (int i = 1; i <= n; ++i){
        if (p[i] == -1){
            strongest.insert(i);
        }
    }
    if (strongest.size() > 1){
        cout << -1 << endl;
    } else {
        for (auto s: strongest){ // just 1
            cout << s << endl;
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