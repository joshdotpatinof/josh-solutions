// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int NEGINF = -1e5;

void solve() {
    vector<string> g;
    string s;
    while (getline(cin, s)){
        if (!s.empty() && s.back() == '\r') s.pop_back();
        if (s.empty()) break;
        g.push_back(s);
    }

    if (g.empty()) return;

    int n = g.size();
    int m = g[0].size();
    
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (g[i][j] == '1'){
                a[i][j] = 1;
            } else {
                a[i][j] = NEGINF;
            }
        }
    }

    int max_area = 0;
    for (int r1 = 0; r1 < n; ++r1){
        vector<int> col_sum(m,0);
        for (int r2 = r1; r2 < n; ++r2){
            for (int j = 0; j < m; ++j){
                col_sum[j] += a[r2][j];
            }
            int current_max = 0, global_max = 0;
            for (int j = 0; j < m; ++j){
                current_max += col_sum[j];
                if (current_max < 0){
                    current_max = 0;
                }
                global_max = max(global_max, current_max);
            }
            max_area = max(max_area, global_max);
        }
    }

    cout << max_area << endl;
}

int main() {
    fast_io;
    int t = 1;
    if (!(cin >> t)) return 0;
    string dummy;
    getline(cin, dummy); // Consume the rest of the line after reading 't'
    getline(cin, dummy); // Consume the blank line right after 't'
    
    bool first = true;
    while (t--) {
        if (!first) {
            cout << "\n";
        }
        first = false;
        solve();
    }
    return 0;
}

// 1
// 10111000
// 00010100
// 00111000
// 00111010
// 00111111
// 01011110
// 01011110
// 00011110