// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isGreater(const tuple<ll, ll, int> &a, const tuple<ll, ll, int> &b){
    if ((get<0>(a) * get<1>(b)) > (get<0>(b) * get<1>(a))) {
        return true;
    } else if ((get<0>(a) * get<1>(b)) < (get<0>(b) * get<1>(a))){
        return false;
    }
    return get<2>(a) < get<2>(b);
}

void solve() {
    int n; cin >> n;
    vector<tuple<ll, ll, int>> a(n);
    vector<tuple<ll, ll, int>> ans;
    for (int i = 0; i < n; ++i){
        cin >> get<0>(a[i]) >> get<1>(a[i]);
        get<2>(a[i]) = i + 1;

        ans.push_back(a[i]);
    }

    sort(ans.begin(), ans.end(), isGreater);
    for (auto &x : ans){
        cout << get<2>(x) << " ";
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