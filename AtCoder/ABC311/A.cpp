// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    unordered_set<int> st;

    for (int i = 0; i < n; ++i){
        st.insert(s[i]);
        if (st.size() == 3){
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl; // shouldn't run
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