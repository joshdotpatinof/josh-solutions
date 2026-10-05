// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

string chooseMin(string a, string b){
    if (a <= b){
        return a;
    }
    return b;
}

string findMinimalGridPath(int i, int j, const vector<string> &g, vector<vector<string>> &dp, vector<vector<bool>> &vis){
    int n = g.size();
    if (i >= n or j >= n){
        return "{";
    }

    if (i == n - 1 and j == n - 1){
        return string(1, g[i][j]);
    }


    if (vis[i][j]){
        return dp[i][j];
    }
    string down = findMinimalGridPath(i + 1, j, g, dp, vis);
    string right = findMinimalGridPath(i, j + 1, g, dp, vis);
    vis[i][j] = true;
    dp[i][j] = string(1, g[i][j]) + chooseMin(down, right);
    return dp[i][j]; 
}

void solve() {
    int n; cin >> n;
    vector<string> g(n);
    for (auto &s : g) cin >> s;
    
    vector<vector<string>> dp(n, vector<string> (n, "a"));
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    string ans = findMinimalGridPath(0, 0, g, dp, vis);
    
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