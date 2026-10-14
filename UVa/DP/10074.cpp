// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int NEGINF = -1e5;

void solve() {
    int n, m;
    while (cin >> n >> m and n and m){
        vector<vector<int>> g(n, vector<int> (m));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                int x; cin >> x;
                if (x == 0){
                    g[i][j] = 1;
                } else {
                    g[i][j] = NEGINF;
                }
            }
        }
        int max_area = 0;
        for (int r1 = 0; r1 < n; ++r1){
            vector<int> col_sum(m, 0);
            for (int r2 = r1; r2 < n; ++r2){
                for (int j = 0; j < m; ++j){
                    col_sum[j] += g[r2][j];
                }
                int curr_max = 0, global_max = 0;
                for (int j = 0; j < m; ++j){
                    curr_max += col_sum[j];

                    if (curr_max < 0){
                        curr_max = 0;
                    }
                    global_max = max(global_max, curr_max);
                }
                max_area = max(max_area, global_max);
            }
        }

        cout << max_area << endl;
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