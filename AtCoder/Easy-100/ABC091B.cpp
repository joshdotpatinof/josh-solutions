// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    for (auto &x: s){
        cin >> x;
    }
    int m; cin >> m;
    vector<string> t(m);
    for (auto &x: t){
        cin >> x;
    }
    int score = 0;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; ++i){ // try announcing
        string curr = s[i];
        mp[curr]++;
    }

    for (int j = 0; j < m; ++j){
        string curr = t[j];
        mp[curr]--;
    }

    for (auto [x, y]: mp){
        score = max(score, y);
    }

    cout << score << endl;
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