// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int a, b, k; cin >> a >> b >> k;
    set<int> st;
    int c = a;
    for (int i = 0; i < k; ++i){
        if ((c + i) > b){
            break;
        }
        st.insert(c + i);   
    }

    c = b;
    for (int i = 0; i < k; ++i){
        if (c - (k - (i + 1)) < a){
            break;
        }
        st.insert(c - (k - (i + 1)));
    }
    for (auto x: st){
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