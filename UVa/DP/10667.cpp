// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int NEGINF = -1e5;


void solve() {
    int s; cin >> s;
    int n; cin >> n;
    vector<vector<int>> g(s, vector<int>(s, 1));
    for (int x = 0; x < n; ++x){
        int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
        // make 0-indexed
        r1--; r2--; c1--; c2--;
        // mark cells of this block as "NEGINFs"

        for (int i = r1; i <= r2; i++){
            for (int j = c1; j <= c2; ++j){
                g[i][j] = NEGINF;
            }
        }
    }
    int max_area = 0;
    for (int r1 = 0; r1 < s; ++r1){
        vector<int> col_sum(s, 0);
        for (int r2 = r1; r2 < s; ++r2){
            for (int j = 0; j < s; ++j){
                col_sum[j] += g[r2][j];
            }

            int curr_max = 0, global_max = 0;
            for (int j = 0; j < s; ++j){
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
    // for (auto &xs : g){
    //     for (auto x: xs){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
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