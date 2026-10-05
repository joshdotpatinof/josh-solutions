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
    vector<pair<int, int>> pairs;
    for (auto p : mp[x]){
        pairs.push_back(p);
    }

    if (pairs.size() <= 0){
        cout << 0 << endl;
        return;
    }
    vector<int> ans;

    sort(pairs.begin(), pairs.end());
    int min_c = pairs[0].first;
    int j = 0;
    while (true){
        if (pairs[j].first != min_c){
            break;
        }
        ans.push_back(pairs[j].second);
        j++;
    }
    
    sort(ans.begin(), ans.end());

    for (auto ret : ans){
        cout << ret << " ";
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