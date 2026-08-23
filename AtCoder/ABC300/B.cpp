// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int matchesShifting(vector<int> &a, const vector<int> &b){
    int n = a.size();
    for (int i = 0; i < n; ++i){
        if (a == b){
            return i;
        }
        rotate(a.begin(), a.begin() + 1, a.end());
    }
    return -1;
}

void solve() {
    int h, w; cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            cin >> a[i][j];
        }
    }
    vector<vector<char>> b(h, vector<char>(w));
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            cin >> b[i][j];
        }
    }
    
    for (int v_shift = 0; v_shift < h; ++v_shift){
        vector<vector<char>> temp_a = a;
        rotate(temp_a.begin(), temp_a.begin() + v_shift, temp_a.end());

        bool possible = false;
        for (int h_shift = 0; h_shift < w; ++h_shift){
            vector<vector<char>> shifted_grid = temp_a;

            for (int i = 0; i < h; ++i){
                rotate(shifted_grid[i].begin(), shifted_grid[i].begin() + h_shift, shifted_grid[i].end());
            }

            if (shifted_grid == b){
                possible = true;
                break;
            }
        }

        if (possible){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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