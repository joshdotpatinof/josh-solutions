// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    string a = "";
    string b = "";
    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            a += '1';
        } else {
            a += '0';
        }
    }

    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            b += '0';
        } else {
            b += '1';
        }
    }

    int count_of_a = 0;
    int count_of_b = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] != a[i]){
            count_of_a++;
        }

        if (s[i] != b[i]){
            count_of_b++;
        }
    }
    cout << min(count_of_a, count_of_b) << endl;

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