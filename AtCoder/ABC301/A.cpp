// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;
    int T = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] == 'T'){
            T++;
        }
    }

    if (T > abs(n-T)){
        cout << "T\n";
    } else if (T < abs(n-T)){
        cout << "A\n";
    } else{ // same amount
        if (s[n-1] == 'T'){
            cout << "A\n";
        } else {
            cout << "T\n";
        }
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