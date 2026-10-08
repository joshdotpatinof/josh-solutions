// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    int mx = n * m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            b[i][j] = (a[i][j] + 1) % (mx + 1);
            b[i][j] = max(b[i][j], 1);
            if (b[i][j] == a[i][j]){
                cout << -1 << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}