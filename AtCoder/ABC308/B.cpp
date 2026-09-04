// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<string> c(n);
    for (auto &x : c){
        cin >> x;
    }
    vector<string> d(m);
    for (auto &x: d){
        cin >> x;
    }
    vector<int> p(m + 1);
    for (auto &x: p){
        cin >> x;
    }

    unordered_map<string, int> mp;
    for (int i = 1; i <= m; ++i){
        mp[d[i-1]] = p[i];
    }
    int sum = 0;
    for (auto &x : c){
        if (mp[x] == 0){
            sum += p[0];
        } else {
            sum += mp[x];
        }
    }
    cout << sum << endl;
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