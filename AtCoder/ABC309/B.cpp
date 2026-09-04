// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    
    vector<char> new_left(n);
    new_left[0] = grid[n-1][1];
    new_left[n-1] = grid[1][0];
    
    for (int i = 1; i < n - 1; ++i){
        new_left[i] = grid[n-i][0];
    }
    // for (auto x: new_left){
    //     cout << x << " ";
    // }
    // cout << endl;
    
    vector<char> new_right(n);
    new_right[0] = grid[0][n-2];
    new_right[n-1] = grid[n-2][n-1];

    for (int i = 1; i < n - 1; ++i){
        new_right[i] = grid[i-1][n-1];
    }
    // for (auto x: new_right){
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<char> new_top(n, '-');
    for (int i = 1; i < n - 1; ++i){
        new_top[i] = grid[0][i-1];
    }
    // for (auto x: new_top){
    //     cout << x << " ";
    // }
    // cout << endl;
    vector<char> new_bot(n, '-');
    for (int i = 1; i < n - 1; ++i){
        new_bot[i] = grid[n-1][n-i];
    }
    // for (auto x: new_bot){
    //     cout << x << " ";
    // }
    // cout << endl;
    
    for (int i = 1; i < n-1; ++i){
        grid[0][i] = new_top[i];
    }

    for (int i = n-2, j = 1; i > 0; --i, ++j){
        grid[n-1][i] = new_bot[j];
    }

    for (int i = 0; i < n; ++i){
        grid[i][n-1] = new_right[i];
    }

    for (int i = n-1, j = 0; i >= 0; --i, ++j){
        grid[i][0] = new_left[j];
    }
    // cout << endl;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << grid[i][j];
        }
        cout << endl;
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