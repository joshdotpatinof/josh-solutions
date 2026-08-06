// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    string b; cin >> b;
    if (n <= 2){
        for (int i = 0; i < n; ++i){
            if (a[i] != b[i]){
                cout << "NO\n";
                return;
            }
        } 
        cout << "YES\n";
        return;
    }
    int count_a_even = 0, count_b_even = 0;
    int count_a_odd = 0, count_b_odd = 0;

    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            if (a[i] == '1'){
                count_a_even++;
            }
            if (b[i] == '1'){
                count_b_even++;
            }
        } else {
            if (a[i] == '1'){
                count_a_odd++;
            }
            if (b[i] == '1'){
                count_b_odd++;
            }
        }
    }
    
    if (count_a_even == count_b_even and count_a_odd == count_b_odd){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
    solve();
    }
    return 0;
}