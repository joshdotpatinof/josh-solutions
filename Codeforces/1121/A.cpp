// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int n) {
    vector<int> p(n + 1);
    vector<int> bad;
    for (int i = 1; i <= n; ++i){
        cin >> p[i];
        if (p[i] != i){
            bad.push_back(i);
        }
    }
    if (bad.empty()){
        cout << "YES\n";
        return;
    }
    int m = bad.size();
    for (int i = 0; i < m; ++i){
        if (p[bad[i]] != bad[m - 1 - i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}