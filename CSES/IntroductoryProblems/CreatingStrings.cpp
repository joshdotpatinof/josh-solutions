// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    ans.push_back(s);
    while (next_permutation(s.begin(), s.end())){
        ans.push_back(s);
    }
    cout << ans.size() << endl;
    for (auto x: ans){
        cout << x << endl;
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