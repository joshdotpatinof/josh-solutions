// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);


void solve() {
    int s, n; cin >> s >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i){
        int t; char c;
        cin >> t >> c;
        if (c == 'y'){
            mp[t]++;
        }
    }

    int low = 0;
    int capacity = 0;
    for (auto [time, count] : mp){
        capacity += (low)
        low = time; // new_low = time;
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