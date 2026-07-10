// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool is_less(tuple<string, int, int> &a, tuple<string, int, int> &b){
    if (get<0>(a) < get<0>(b)){
        return true;
    } else if (get<0>(a) > get<0>(b)){
        return false;
    } else {
        if (get<1>(a) > get<1>(b)){
            return true;
        } else {
            return false;
        }
    }
}

void solve() {
    int n; cin >> n;
    vector<tuple<string, int, int>> a(n);
    for (int i = 0; i < n; ++i){
        cin >> get<0>(a[i]) >> get<1>(a[i]);
        get<2>(a[i]) = i + 1;
    }
    sort(a.begin(), a.end(), is_less);
    // cout << endl;
    for (auto [x, y, z] : a){
        cout << z << endl;
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