// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<pair<int ,int>> a(n);

    vector<pair<int, int>> max_flav(n + 1, {-1, -1}); // {sat, flav}

    for (auto &x : a){
        cin >> x.first >> x.second;
        
        max_flav[x.first].first = max(max_flav[x.first].first, x.second);
        max_flav[x.first].second = x.first;
    }
    
    sort(max_flav.begin(), max_flav.end());
    sort(a.begin(), a.end());
    
    // for (auto [x, y] : max_flav){
        //         cout << x << " " << y << endl;
        // }
        
    int max_ans = max_flav[max_flav.size()-1].first + max_flav[max_flav.size()-2].first;
    // get max (choosing 2 different flavors)
    int pinakamax_flav = max_flav[max_flav.size()-1].second;
    bool has_gone_thru_it = false;
    vector<int> flavs_of_pinakamax_flav;
    for (int i = 0; i < n; ++i){
        if (a[i].first == pinakamax_flav){
            has_gone_thru_it = true;
            flavs_of_pinakamax_flav.push_back(a[i].second);
        } else {
            if (!has_gone_thru_it) continue;
            break;
        }
    }

    sort(flavs_of_pinakamax_flav.begin(), flavs_of_pinakamax_flav.end());
    // cout << "pmf: " << pinakamax_flav << endl;
    // for (auto x : flavs_of_pinakamax_flav){
    //     cout << x << " ";
    // }

    max_ans = max(max_ans, flavs_of_pinakamax_flav[flavs_of_pinakamax_flav.size()-1] + (flavs_of_pinakamax_flav[flavs_of_pinakamax_flav.size()-2] / 2));
    cout << max_ans << endl;
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