// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int t) {
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> g(n, vector<int>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> g[i][j];
        }
    }

    ll max_area = 0;
    ll min_cost = 0;
    for (int r1 = 0; r1 < n; ++r1){
        vector<ll> col_sums(m, 0);
        for (int r2 = r1; r2 < n; ++r2){
            for (int j = 0; j < m; ++j){
                col_sums[j] += g[r2][j];
            }
            ll height = (r2 - r1 + 1);
            ll curr_cost = 0;
            int left = 0;
            for (int right = 0; right < m; ++right){
                curr_cost += col_sums[right];

                while (curr_cost > k and left <= right){
                    curr_cost -= col_sums[left];
                    left++;
                }

                if (curr_cost <= k){
                    ll width = (right - left + 1);
                    ll area = height * width;

                    if (area > max_area){
                        max_area = area;
                        min_cost = curr_cost;
                    } else if (area == max_area){
                        min_cost = min(min_cost, curr_cost);
                    }
                }
            }
        }
    }
    cout << "Case #" << t << ": " << max_area << " " << min_cost << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
    }
    return 0;
}