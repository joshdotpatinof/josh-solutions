// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int strToNum(string &s){
    int n = s.size();
    int res = 0;
    // ignore 'T'
    for (int i = 1; i < n; ++i){
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}

void solve() {
    int n, m; cin >> n >> m;
    unordered_map<int, int> mp; // mp[Ti] = Ti_idx; 
    for (int i = 0; i < n; ++i){
        mp[i + 1] = i; 
    }

    for (int i = 0; i < m; ++i){
        string l;
        string r;
        cin >> l >> r;
        int l_num = strToNum(l);
        int r_num = strToNum(r); 
        int x = mp[l_num];
        int y = mp[r_num];
        if (x > y){
            // order has to change
            for (auto [k, v] : mp){ // k - key, v = val
                if (v <= x and v > y){
                    mp[k]--;
                    mp[k] = max(mp[k], 0);
                }
            }
            mp[r_num] = x;
        }

    }

    vector<int> ans(n);
    for (auto [x, y] : mp){
        ans[y] = x;
    }

    for (auto x: ans) {
        cout << "T" << x << " ";
    }
    cout << endl;
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