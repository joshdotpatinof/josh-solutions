// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll A, B; cin >> A >> B;
    string s; cin >> s;

    if (s.size() != A + B + 1){
        cout << "No\n";
        return;
    }

    for (int i = 0; i < A; ++i){
        if (s[i] == '-'){
            cout << "No\n";
            return;
        }
    }

    if (s[A] != '-'){
        cout << "No\n";
        return;
    }
    for (int i = A + 1; i < (A+1) + B; ++i){
        if (s[i] >= '0' and s[i] <= '9'){
            continue;
        } else {
            cout << "No\n";
            return;
        }
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