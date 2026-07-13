// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<vector<int>> a(2, vector<int>(n, 0));
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    } 
    ll max_candies = 0;
    // try down then right path
    ll curr_candies = a[0][0] + a[1][0];
    for (int j = 1; j < n; ++j){
        curr_candies += a[1][j];
    }

    max_candies = max(max_candies, curr_candies);
    // try right then down path
    curr_candies = a[0][0] + a[1][n-1];
    for (int j = 1; j < n; ++j){
        curr_candies += a[0][j];
    }
    max_candies = max(max_candies, curr_candies);
    // try varied right then down paths
    for (int j = 1; j < n - 1; ++j){
        // try different pivots
        curr_candies = a[0][0];
        for (int k = 1; k <= j; ++k){
            curr_candies += a[0][k];
        }

        for (int k = j; k < n; ++k){
            curr_candies += a[1][k];
        }
        max_candies = max(max_candies, curr_candies);
    }

    cout << max_candies << endl;
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