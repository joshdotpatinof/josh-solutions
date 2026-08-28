// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MOD = 37;

void solve() {
    int n; cin >> n;
    unordered_map<char, int> mp;
    unordered_map<int, char> pm;
    for (int i = 0; i < 26; ++i){
        mp['A' + i] = i;
        pm[i] = 'A' + i; 
    }

    for (int i = 0; i < 10; ++i){
        mp['0' + i] = 26 + i;
        pm[26 + i] = '0' + i;
    }
    mp[' '] = 36;
    pm[36] = ' ';
    
    // for (auto [x, y]: pm){
    //     cout << "pm[" << x << "] = " << y << endl;
    // }

    vector<vector<ll>> mat(n, vector<ll>(n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> mat[i][j];
        }
    }
    string s;
    getline(cin >> ws, s);
    vector<vector<ll>> nums;
    vector<ll> curr;
    for (char c : s){
        if (curr.size() == n){
            nums.push_back(curr);
            curr.clear();
        }
        
        // cout << mp[c] << " ";
        curr.push_back(mp[c]);
    }
    // cout << endl;
    while ((int)curr.size() != n){
        curr.push_back(36);
    }
    nums.push_back(curr);

    // for (auto v: nums){
    //     for (int i = 0; i < n; ++i){
    //         cout << v[i] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    for (int i = 0; i < (int)nums.size(); ++i){
        vector<ll> &v = nums[i];
        for (int row = 0; row < n; ++row) {
            ll ans = 0;
            for (int col = 0; col < n; ++col) {
                ans = (ans + mat[row][col] * v[col]) % MOD;
            }
            ans = (ans % MOD + MOD) % MOD;
            cout << pm[ans]; 
        }
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