// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    ll n; cin >> n;
    ll tmp = 0;
    string new_s = "";
    for (char c : s){
        if (c == '1'){
            new_s += '1';
        } else {
            new_s += '0';
        }
    }

    tmp = stoll(new_s, nullptr, 2);

    if (tmp > n){
        cout << -1 << endl;
        return;
    }

    int len = s.size();
    for (int i = 0; i < len; ++i){
        if (s[i] == '?'){
            int bit_pos = len - 1 - i;
            if ((tmp | (1LL << bit_pos)) <= n){
                tmp |= (1LL << bit_pos);
            }
        }
    }
    cout << tmp << endl;
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