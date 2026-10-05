// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b, c; cin >> a >> b >> c;

    vector<vector<vector<ll>>> pref(a + 1, vector<vector<ll>>(b + 1, vector<ll>(c + 1, 0))); // 1-indexed
    for (int i = 1; i <= a; ++i){
        for (int j = 1; j <= b; ++j){
            for (int k = 1; k <= c; ++k){
                ll val; cin >> val;
                pref[i][j][k] = val + pref[i-1][j][k]
                                    + pref[i][j-1][k] 
                                    + pref[i][j][k-1]
                                    - pref[i-1][j-1][k] 
                                    - pref[i-1][j][k-1] 
                                    - pref[i][j-1][k-1] 
                                    + pref[i-1][j-1][k-1];
            }
        }
    }

    auto get_sum = [&](int x1, int y1, int z1, int x2, int y2, int z2) {
        return pref[x2][y2][z2]
             - pref[x1-1][y2][z2] - pref[x2][y1-1][z2] - pref[x2][y2][z1-1]
             + pref[x1-1][y1-1][z2] + pref[x1-1][y2][z1-1] + pref[x2][y1-1][z1-1]
             - pref[x1-1][y1-1][z1-1];
    };


    ll max_val = -2e18;
    for (int x1 = 1; x1 <= a; ++x1){
        for (int x2 = x1; x2 <= a; ++x2){
            for (int y1 = 1; y1 <= b; ++y1){
                for (int y2 = y1; y2 <= b; ++y2){
                    ll curr = 0;
                    for (int z = 1; z <= c; ++z){
                        ll slice_sum = get_sum(x1, y1, z, x2, y2, z);
                        if (curr < 0){
                            curr = slice_sum;
                        } else {
                            curr += slice_sum;
                        }
                        max_val = max(max_val, curr);
                    }
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