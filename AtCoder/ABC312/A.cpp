// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    unordered_set<string> st = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    if (st.count(s)){
        cout << "Yes\n";
    } else {
        cout << "No\n";
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