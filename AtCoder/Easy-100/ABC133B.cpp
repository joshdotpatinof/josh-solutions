// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool is_a_perfect_square(int num){
    int lo = 1, hi = num;
    while (lo <= hi){
        int mi = lo + (hi - lo) / 2;
        
        if (mi * mi > num){
            hi = mi - 1;
        } else if(mi * mi < num){
            lo = mi + 1;
        } else {
            return true; // mi * mi == num
        }
    }
    return false;
}

void solve() {
    int n; cin >> n;
    int d; cin >> d;
    vector<vector<int>> coords(n, vector<int>(d));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < d; ++j){
            cin >> coords[i][j];
        }
    }
    ll ans = 0;
    for (int j = 1; j < n; ++j){
        for (int i = 0; i < j; ++i){
            int dist = 0;

            for (int k = 0; k < d; ++k){
                dist += (abs(coords[i][k] - coords[j][k]) * abs(coords[i][k] - coords[j][k]));
            }
            if (is_a_perfect_square(dist)){
                ans++;
            }
        }
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