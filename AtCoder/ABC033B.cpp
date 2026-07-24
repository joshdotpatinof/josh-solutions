// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int max_power = -1;
    ll tot = 0;
    string town_name = "";
    for (int i = 0; i < n; ++i){
        string name; cin >> name;
        int power; cin >> power;
        if (power > max_power){
            max_power = power;
            town_name = name;
        }
        tot += power;
    }

    if (max_power > (tot / 2)){
        cout << town_name << endl;
    } else {
        cout << "atcoder\n";
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