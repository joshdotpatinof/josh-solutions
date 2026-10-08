// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int NEGINF = -1270001;

void solve() {
    int n; cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> g[i][j];
        }
    }

    vector<vector<int>> a(n, vector<int>(n));
    a[0][0] = g[0][0];
    for (int i = 1; i < n; ++i){
        a[i][0] = g[i][0] + a[i-1][0];
    }
    for (int j = 1; j < n; ++j){
        a[0][j] = g[0][j] + a[0][j-1];
    }
    
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < n; ++j){
            a[i][j] += g[i][j];
            a[i][j] += a[i-1][j];
            a[i][j] += a[i][j-1];
            a[i][j] -= a[i-1][j-1];
        }
    }
    
    // for (auto xs : a){
    //     for (auto x : xs){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    int max_rect_sum = NEGINF;
    for (int i1 = 0; i1 < n; ++i1){
        for (int j1 = 0; j1 < n; ++j1){
            for (int i2 = i1; i2 < n; ++i2){
                for (int j2 = j1; j2 < n; ++j2){
                    int curr = a[i2][j2];
                    if (i1 > 0) curr -= a[i1-1][j2];
                    if (j1 > 0) curr -= a[i2][j1-1];
                    if (i1 > 0 and j1 > 0) curr += a[i1-1][j1-1]; // inclusion-exclusion principle

                    max_rect_sum = max(max_rect_sum, curr);
                }
            }
        }
    }

    cout << max_rect_sum << endl;
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
// n = 4
//  0 -2 -7  0
//  9  2 -6  2
// -4  1 -4  1
// -1  8  0 -2