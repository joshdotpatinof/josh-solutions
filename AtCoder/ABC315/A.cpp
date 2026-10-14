// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    set<char> st = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < s.size(); ++i){
        if (st.count(s[i]) == 0){
            cout << s[i];
        }
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