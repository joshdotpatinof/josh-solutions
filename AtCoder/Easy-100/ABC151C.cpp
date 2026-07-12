// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    unordered_map<int, pair<string, int>> mp;

    for (int i = 0; i < m; ++i){
        int p; cin >> p;
        string s; cin >> s;
        if (s == "AC"){
            if (mp[p].first == "AC"){
                // do nothing (already AC)
            } else {
                // either was "WA" or ""
                mp[p].first = s;
            }
        } else { // s == "WA"
            if (mp[p].first == "AC"){
                // do nothing (already AC)
            } else {
                // either was "WA" or ""
                mp[p].second++;
                mp[p].first = s;
            }
        } 
    }
    int c = 0, pen = 0;
    for (auto [x, y]: mp){
        auto [a, b] = y;
        if (a == "AC"){
            c++;
            pen += b;
        }
    }
    cout << c << " " << pen << endl;
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