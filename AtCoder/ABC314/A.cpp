// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cout << "3.";
    for (int j = 0; j < n; ++j){
        cout << s[j];
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