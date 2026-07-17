// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll solve(int i, vector<string> &grid) {
    if (i == 8){
        return 0; // ans
    }

    for (int j = 0; j < 8; ++j){
        if (grid[i][j] != '*'){
            // can only put queens in free
            // try putting
        }

    }

    return ways;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    vector<string> grid(8);
    for (auto &x: grid){
        cin >> x;
    }
    cout << solve(0, grid) << endl;
    //}
    return 0;
}