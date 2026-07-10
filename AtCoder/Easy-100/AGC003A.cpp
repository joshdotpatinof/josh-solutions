// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    unordered_map<char, int> mp;
    mp['N'] = 0;
    mp['S'] = 0;
    mp['E'] = 0;
    mp['W'] = 0;
    
    for (int i = 0; i < n; ++i){
        mp[s[i]]++;
    }
    if ((mp['N'] > 0 and mp['S'] == 0) or (mp['S'] > 0 and mp['N'] == 0) or (mp['E'] > 0 and mp['W'] == 0) or (mp['W'] > 0 and mp['E'] == 0)){
        cout << "No\n";
        return;
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