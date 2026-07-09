// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<string> w(n);
    for (auto &x : w){
        cin >> x;
    }
    unordered_set<string> st;
    string curr = w[0];
    st.insert(curr);
    for (int i = 1; i < n; ++i){
        if (curr[curr.size()-1] != w[i][0] or st.count(w[i]) > 0){
            cout << "No\n";
            return;
        }
        curr = w[i];
        st.insert(curr);
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