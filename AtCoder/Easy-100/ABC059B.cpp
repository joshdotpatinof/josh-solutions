// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int dig(char c){
    return c - '0';
}

void solve() {
    string a, b; cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (n > m){
        cout << "GREATER\n";
    } else if (n < m){
        cout << "LESS\n";
    } else {
        // n == m
        for (int i = 0; i < n; ++i){
            if (dig(a[i]) > dig(b[i])){
                cout << "GREATER\n";
                return;
            } else if (dig(a[i]) < dig(b[i])){
                cout << "LESS\n";
                return;
            }
        }
        
        cout << "EQUAL\n";
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