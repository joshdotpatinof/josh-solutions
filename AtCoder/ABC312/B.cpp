// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<string> g(n);
    for (auto &s : g) cin >> s;
    vector<pair<int, int>> ans;

    for (int i = 0; i < n - 9; ++i){
        for (int j = 0; j < m - 9; ++j){
            bool is_TaKCode = true;

            // checking top-left 3x3
            for (int a = i; a < i + 3; ++a){
                for (int b = j; b < j + 3; ++b){
                    if (g[a][b] != '#') is_TaKCode = false;
                }
            }

            if (!is_TaKCode) break;

            // checking adj white top-left (bottom)
            for (int b = j; b < j + 4; ++b){
                if (g[i + 4][b] != '.') is_TaKCode = false;
            }

            if (!is_TaKCode) break;

            // checking adj white top-left (right)
            for (int a = i; a < i + 3; ++i){
                if (g[a][j + 4] != '.') is_TaKCode = false;
            }

            if (!is_TaKCode) break;

            // checking bot-right 3x3

            for (int a = i + 6; a < i + 9; ++a){
                for (int b = j + 6; b < j + 9; ++b){
                    if (g[a][b] != '#') is_TaKCode = false;
                }   
            }

            if (!is_TaKCode) break;

            // checking adj white bot-right (top)
            for (int b = j + 5; b < j + 9; ++b){
                if (g[i + 5][b] != '.') is_TaKCode = false;
            }

            if (!is_TaKCode) break;

            // checking adj white bot-right (left)
            for (int a = i + 6; a < i + 9; ++i){
                if (g[a][j + 5] != '.') is_TaKCode = false;
            }

            if (is_TaKCode) ans.push_back(make_pair(i, j));
        }
    }

    for (auto [x, y] : ans){
        cout << x + 1 << " " << y + 1 << endl;
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