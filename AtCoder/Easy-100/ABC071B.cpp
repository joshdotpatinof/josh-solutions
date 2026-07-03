// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    unordered_set<char> st;

    for (auto c : s){
        st.insert(c);
    }

    if (st.size() == 26){
        cout << "None\n";
        return;
    }
    char start = 'a';
    for (int i = 0; i < 26; ++i){
        if (st.count(start + i) == 0){
            cout << (char)(start + i )<< endl;
            return;
        }
    }

    cout << "z\n";
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