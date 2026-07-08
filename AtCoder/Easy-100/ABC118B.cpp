// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; ++i){
        int k; cin >> k;
        for (int j = 0; j < k; ++j){
            int x; cin >> x;
            a[i].push_back(x);
        }
    }
    
    int count = 0;
   unordered_map<int, int> foods;
    for (int i = 0; i < n; ++i){
        int k = a[i].size();
        unordered_set<int> foods_of_i;
        for (int j = 0; j < k; ++j){
            foods_of_i.insert(a[i][j]);
        }

        for (auto x: foods_of_i){
            foods[x]++;
        }
    }

    for (auto [x, y] : foods){
        if (y == n){
            count++;
        }
    }

    cout << count << endl;
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