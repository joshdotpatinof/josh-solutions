// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    unordered_map<int, vector<pair<int, int>>> mp;
    for (int i = 1; i <= n; ++i){
        int c; cin >> c;
        for (int j = 0; j < c; ++j){
            int bet; cin >> bet;
            mp[bet].push_back({c, i});
        }
    }
    int x; cin >> x;
    vector<pair<int, int>> pairs = mp[x];

    if (pairs.empty()){
        cout << 0 << endl;
        return;
    }

    sort(pairs.begin(), pairs.end());
    int min_c = pairs[0].first;
    vector<int> ans;

    for (const auto& p : pairs){
        if (p.first == min_c){
            ans.push_back(p.second);
        } else {
            break;
        }
    }
    
    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int i = 0; i < (int)ans.size(); ++i){
        cout << ans[i] << (i + 1 == (int)ans.size() ? "" : " ");
    }
    cout << endl;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    solve();
    //}1≤Ci​≤37
    return 0;
}