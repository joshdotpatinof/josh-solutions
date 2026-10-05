// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, q; cin >> n >> q;
    vector<set<int>> e(n);
    int ans = n;
    for (int i = 0; i < q; ++i){
        int opt; cin >> opt;
        if (opt == 1){
            int u, v;
            cin >> u >> v;
            u--; v--;
            // connect u and v
            if(e[u].size() == 0) ans--;
            if (e[v].size() == 0) ans--;
            e[u].insert(v);
            e[v].insert(u);
        } else if (opt == 2){
            // remove all connections of vertex u
            int u;
            cin >> u;
            u--;
            if (!e[u].empty()){
                ans++;
                for (auto v: e[u]){
                    e[v].erase(u);
                    if (e[v].size() == 0) ans++;   
                }
                e[u].clear();
            }
        }
        cout << ans << endl;
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