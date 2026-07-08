// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string w; cin >> w;
    unordered_map<char, int> mp;
    for (auto x: w){
        mp[x]++;
    }

    for (auto [x, y]: mp){
        if (y % 2 != 0){
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
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