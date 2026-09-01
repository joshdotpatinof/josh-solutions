// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    unordered_map<int, int> mp;
    vector<int> a(3 * n);
    for (int i = 0; i < 3 * n; ++i){
        cin >> a[i];
        mp[a[i]] = 0;
    }
    vector<pair<int, int>> ans(n);

    for (int i = 0; i < 3 * n; ++i){
        if (mp[a[i]] == 0){ // first occurence
            mp[a[i]]++;
        } else if (mp[a[i]] == 1){
            // cout << "found: " << a[i] << " @ " << i + 1 << endl;
            ans[a[i] - 1].first = i + 1;
            ans[a[i] - 1].second = a[i];
            mp[a[i]]++;
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < n; ++i){
        cout << ans[i].second << " ";
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