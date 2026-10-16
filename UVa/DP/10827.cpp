// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<vector<int>> g(2 * n + 1, vector<int> (2 * n + 1));
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> g[i][j];
            g[i][j+n] = g[i+n][j] = g[i+n][j+n] = g[i][j];
        }
    }

    for (int i = 1; i <= 2 * n; ++i){
        for (int j = 1; j <= 2 * n; ++j){
            g[i][j] += (g[i][j-1] + g[i-1][j]-g[i-1][j-1]);
        }
    }

    int max_val = INT_MIN;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            for (int k = i; k < i + n; ++k){
                for (int l = j; l < j + n; ++l){
                    int cur = g[k][l] - g[i-1][l] - g[k][j-1] + g[i-1][j-1];
                    max_val = max(max_val, cur);
                }
            }
        }
    }

    cout << max_val << endl;

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