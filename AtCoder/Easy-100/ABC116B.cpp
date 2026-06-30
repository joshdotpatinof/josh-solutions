// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll f(ll n){
    if (n % 2 == 0){
        return n / 2;
    } else {
        return (3 * n) + 1; 
    }
}

void solve() {
    unordered_set<ll> st;
    ll count = 0;
    ll s; cin >> s;
    st.insert(s);
    count++;
    while (true){
        count++;
        s = f(s);
        if (st.count(s) > 0){
            break;
        }
        st.insert(s);
    }

    cout << count << endl;
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