// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int h, w; cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    pair<int, int> ans = {-1, -1}; 
    int min_r = h, max_r = -1;
    int min_c = w, max_c = -1;
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            cin >> grid[i][j];
            if (grid[i][j] == '#'){
                min_r = min(min_r, i);
                max_r = max(max_r, i);
                min_c = min(min_c, j);
                max_c = max(max_c, j);
            }
        }
    }

    for (int i = min_r; i <= max_r; ++i){
        for (int j = min_c; j <= max_c; ++j){
            if (grid[i][j] == '.'){
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
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