// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string o, e; cin >> o >> e;
    int n = o.size();
    int m = e.size();
    int i = 0, j = 0;
    for (int k = 0; k < (n + m); ++k){
        if (k % 2 == 0){
            cout << o[i];
            i++;
        } else {
            cout << e[j];
            j++;
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