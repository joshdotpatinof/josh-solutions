// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check(int r, int c, const int n, const int m, const vector<string>&g){
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if (g[r+i][c+j] != '#') return false;
        }
    }

    for (int i = 6; i < 9; ++i){
        for (int j = 6; j < 9; ++j){
            if (g[r+i][c+j] != '#') return false;
        }
    }

    for (int i = 0; i < 4; ++i){
        if (g[r+i][c+3] != '.') return false; 
    }

    for (int j = 0; j < 4; ++j){
        if (g[r+3][c+j] != '.') return false;
    }

    for (int i = 5; i < 9; ++i){
        if (g[r+i][c+5] != '.') return false;
    }

    for (int j = 5; j < 9; ++j){
        if (g[r+5][c+j] != '.') return false;
    }

    return true;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<string> g(n);
    for (auto &s : g) cin >> s;
    vector<pair<int, int>> ans;
    // looping possible candidates
    for (int i = 0; i <= n - 9; ++i){
        for (int j = 0; j <= m - 9; ++j){
            if (check(i, j, n, m, g)) ans.push_back({i,j});
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