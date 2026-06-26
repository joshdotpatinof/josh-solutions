// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    unordered_set<char> st;
    st.insert('A');
    st.insert('C');
    st.insert('G');
    st.insert('T');

    ll len = 0;
    ll curr = 0;
    for (char c: s){
        if (st.count(c) > 0){
            curr++;
            len = max(len, curr);
        } else {
            curr = 0; // reset
        }
    }
    cout << len << endl; 
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