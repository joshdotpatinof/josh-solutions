// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<int>c(n);
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i){
        cin >> c[i];
        mp[c[i]].push_back(i); // get indices of characters with color c[i]
    }

    for (int j = 1; j <= m; ++j){
        // for each color, do a shift right
        if (mp[j].size() > 1){
            vector<int> new_pos = mp[j];
            rotate(new_pos.begin(), new_pos.begin()+1, new_pos.end());
            // 0 2 5 -> 5 0 2
            vector<char> cars;
            for (auto pos : mp[j]){
                cars.push_back(s[pos]);
            }

            for (int i = 0; i < new_pos.size(); ++i){
                s[new_pos[i]] = cars[i];
            }
        }
    }
    
    cout << s << endl;
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