// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;

    // n * n grid
    vector<pair<int, int>> a(m);
    for (auto &[x, y]: a){
        cin >> x >> y;
    }
    // can only have max n pieces...
    unordered_set<int> seen_rows;
    unordered_set<int> seen_cols;
    
    int ans = 0;
    // process backwards
    for (int i = m - 1; i >= 0; --i){
        auto [x, y] = a[i];
        
        if (seen_rows.size() == n or seen_cols.size() == n){
            break;
        }

        if (seen_rows.find(x) == seen_rows.end() and seen_cols.find(y) == seen_cols.end()){
            ans++;
        } 
        seen_rows.insert(x);
        seen_cols.insert(y);
    }
    cout << ans << endl;
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