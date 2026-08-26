// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // forgive me for my coding sins...
    int h, w; cin >> h >> w;
    vector<string> g(h);
    for (auto &x : g){
        cin >> x;
    }

    vector<pair<int, int>> pos_of_s;
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            if (g[i][j] == 's'){
                pos_of_s.push_back({i, j});
            }
        }
    }

    // check all 8 dirs
    for (auto [i, j]: pos_of_s){
        // row-to-right
        if (j + 4 < w){
            if (g[i][j] == 's' and g[i][j+1] == 'n' and g[i][j+2] == 'u' and g[i][j+3] == 'k' and g[i][j+4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i + 1 << " " << j + 1 + 1 << "\n" << i + 1 << " " << j + 2 + 1 << "\n" << i + 1 << " " << j + 3 + 1 << "\n" << i + 1 << " " << j + 4 + 1 << "\n";
                return;
            }
        }

        // row-to-left
        if (j - 4 >= 0){
            if (g[i][j] == 's' and g[i][j-1] == 'n' and g[i][j-2] == 'u' and g[i][j-3] == 'k' and g[i][j-4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i + 1 << " " << j - 1 + 1 << "\n" << i + 1 << " " << j - 2 + 1 << "\n" << i + 1 << " " << j - 3 + 1 << "\n" << i + 1 << " " << j - 4 + 1 << "\n";
                return;
            }
        }

        // col-to-down
        if (i + 4 < h){
            if (g[i][j] == 's' and g[i+1][j] == 'n' and g[i+2][j] == 'u' and g[i+3][j] == 'k' and g[i+4][j] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i + 1 + 1 << " " << j + 1 << "\n" << i + 2 + 1 << " " << j + 1 << "\n" << i + 3 + 1 << " " << j + 1 << "\n" << i + 4 + 1 << " " << j + 1 << "\n";
                return;
            }
        }

        // col-to-up
        if (i - 4 >= 0){
            if (g[i][j] == 's' and g[i-1][j] == 'n' and g[i-2][j] == 'u' and g[i-3][j] == 'k' and g[i-4][j] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i - 1 + 1 << " " << j + 1 << "\n" << i - 2 + 1 << " " << j + 1 << "\n" << i - 3 + 1 << " " << j + 1 << "\n" << i - 4 + 1 << " " << j + 1 << "\n";
                return;
            }
        }

        // diag-top-right
        if (i - 4 >= 0 and j + 4 < w){
            if (g[i][j] == 's' and g[i-1][j+1] == 'n' and g[i-2][j+2] == 'u' and g[i-3][j+3] == 'k' and g[i-4][j+4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i - 1 + 1 << " " << j + 1 + 1 << "\n" << i - 2 + 1 << " " << j + 2 + 1 << "\n" << i - 3 + 1 << " " << j + 3 + 1 << "\n" << i - 4 + 1 << " " << j + 4 + 1 << "\n";
                return;
            }
        }

        // diag-top-left
        if (i - 4 >= 0 and j - 4 >= 0){
            if (g[i][j] == 's' and g[i-1][j-1] == 'n' and g[i-2][j-2] == 'u' and g[i-3][j-3] == 'k' and g[i-4][j-4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i - 1 + 1 << " " << j - 1 + 1 << "\n" << i - 2 + 1 << " " << j - 2 + 1 << "\n" << i - 3 + 1 << " " << j - 3 + 1 << "\n" << i - 4 + 1 << " " << j - 4 + 1<< "\n";
                return;
            }
        }

        // diag-bot-left
        if (i + 4 < h and j - 4 >= 0){
            if (g[i][j] == 's' and g[i+1][j-1] == 'n' and g[i+2][j-2] == 'u' and g[i+3][j-3] == 'k' and g[i+4][j-4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i + 1 + 1 << " " << j - 1 + 1 << "\n" << i + 2 + 1 << " " << j - 2 + 1 << "\n" << i + 3 + 1 << " " << j - 3 + 1 << "\n" << i + 4 + 1 << " " << j - 4 + 1 << "\n";
                return;
            }
        }

        // diag-bot-right
        if (i + 4 < h and j + 4 < w){
            if (g[i][j] == 's' and g[i+1][j+1] == 'n' and g[i+2][j+2] == 'u' and g[i+3][j+3] == 'k' and g[i+4][j+4] == 'e'){
                cout << i + 1 << " " << j + 1 << "\n" << i + 1 + 1 << " " << j + 1 + 1 << "\n" << i + 2 + 1 << " " << j + 2 + 1 << "\n" << i + 3 + 1 << " " << j + 3 + 1 << "\n" << i + 4 + 1 << " " << j + 4 + 1 << "\n";
                return;
            }
        }
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}