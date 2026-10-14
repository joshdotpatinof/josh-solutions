// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll NEGINF = -17;

void solve() {
    ll n, m;
    bool first = true;
    while (cin >> n >> m){
        if (!first){
            cout << "\n";
        }
        first = false;

        vector<vector<ll>> grid(n, vector<ll>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        reverse(grid.begin(), grid.end());
        ll global_sum = 0;
        ll curr_r = n - m;
        vector<ll> initial_sums(curr_r + 1);

        // calculate all initial sums
        
        for (int row = 0; row < curr_r + 1; ++row){
            for (int i = row; i < row + m; ++i){
                for (int j = 0; j < m; ++j){
                    initial_sums[row] += grid[i][j];
                }
            }
        }
        
        while (curr_r >= 0){ // starts
            int curr_sum = initial_sums[curr_r];
            // j = 0
            cout << curr_sum << endl;
            global_sum += curr_sum;
            for (int j = 1; j < (n - m) + 1; ++j){ // from column 1 to (n-m-1)
                // make corrections
                for (int i = curr_r; i < curr_r + m; ++i){
                    // delete first column of previous m*m block
                    curr_sum -= grid[i][j-1];
                    // add last column of current m*m block processed
                    curr_sum += grid[i][j+m-1];
                    // cout << "test: " << curr_sum << endl;
                }
                // processed the next m*m for that row:
                cout << curr_sum << endl;
                global_sum += curr_sum;
            }
            curr_r--;

            // cout << "moved to next row!\n";
        }

        // for (auto x : initial_sums) {
        //     cout << x << " ";
        // }
        cout << global_sum << endl;
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
    
    // 1 2 1 3 
    // 0 2 3 3 
    // 1 0 2 2 
    // 1 2 2 1 
    
    // 0 0 1 0 0 
    // 0 0 1 0 0 
    // 1 1 1 1 1 
    // 0 0 1 0 0 
    // 1 0 1 0 0
    
    // prints grid
    // for (int i = 0; i < n; ++i){
    //     for (int j = 0; j < n; ++j){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }