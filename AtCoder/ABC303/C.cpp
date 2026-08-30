// written by josh.patinof
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s; cin >> s;
    unordered_map<int, unordered_set<int>> mp; 
    for (int i = 0; i < m; ++i){
        pair<int, int> v;
        cin >> v.first >> v.second;
        mp[v.first].insert(v.second);
    }
    pair<int, int> curr = {0, 0}; // start
    for (int i = 0; i < n; ++i){
        char c = s[i];
        if (c == 'R'){
            curr.first++;
        } else if (c == 'L'){
            curr.first--;
        } else if (c == 'U'){
            curr.second++;
        } else if (c == 'D'){
            curr.second--;
        } else {
            continue; // shouldn't happen :)
        }
        h--; // deduct h after move
        
        if (h < 0){
            cout << "No\n";
            return;
        }
        
        if (mp[curr.first].count(curr.second) > 0){ // has health tile
            if (h < k){
                h = k;
                mp[curr.first].erase(curr.second);
            }
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

// (x+1,y) if Si​ is R;
// (x−1,y) if Si​ is L;
// (x,y+1) if Si​ is U;
// (x,y−1) if Si​ is D.