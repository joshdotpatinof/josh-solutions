// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<string> S(n);
    for (auto &s: S) cin >> s;
    unordered_set<string> st;
    int ans = 0;
    for (int i = 0; i < n; ++i){
        if (!st.count(S[i])){
            ans++;
            st.insert(S[i]);
            reverse(S[i].begin(), S[i].end());
            st.insert(S[i]);
        }
    }
    cout << ans << endl;
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