// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll val;
    while (cin >> val){
        vector<ll> seq;
        if (val != -999999) seq.push_back(val);
        while (cin >> val and val != -999999) {
            seq.push_back(val);
        }
        int n = seq.size();
        // solve
        ll curr_max = seq[0];
        ll curr_min = seq[0];
        ll glob_max = curr_max;

        for (int i = 1; i < n; ++i){
            ll tmp_max = curr_max;
            ll tmp_min = curr_min;
            curr_max = max({seq[i], tmp_max * seq[i], tmp_min * seq[i]});
            curr_min = min({seq[i], tmp_max * seq[i], tmp_min * seq[i]});
            glob_max = max(curr_max, glob_max);
        }

        cout << glob_max << endl;
        
        if (cin.eof()) break;
    }
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