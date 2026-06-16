// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    unordered_map<char, ll> mp;
    string s; cin >> s;
    for (auto x: s){
        mp[x]++;
    }
    ll num_of_distinct_odd = 0;
    for (auto [x, y]: mp){
        if (y % 2 != 0){
            num_of_distinct_odd++;
        }
    }

    if (num_of_distinct_odd > 1){
        cout << "NO SOLUTION\n";
    } else {
        // building answer
        vector<char> first_half;
        char odd_char;
        for (auto [x, y]: mp){
            ll cnt = y;
            if (y % 2 != 0){
                odd_char = x;
                cnt--;
            }
            cnt /= 2;
            for (int i = 0; i < cnt; ++i){
                first_half.push_back(x);
            }
        }

        for (auto c: first_half){
            cout << c;
        }
        if (num_of_distinct_odd == 1){
            cout << odd_char;
        }
        for (int i = first_half.size() - 1; i >= 0; i--){
            cout << first_half[i];
        }
        cout << endl;
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