// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int initial_len = 1;
    for (int i = 0; i < n - 1; ++i){
        if (s[i] != s[i + 1]){
            initial_len++;
        }
    }
    int min_val = INT_MAX;
    for (int i = 1; i < n - 1; ++i){
        int old_trans = (s[i-1] != s[i]) + (s[i] != s[i + 1]);
        int new_trans = (s[i-1] != s[i + 1]);
        int curr_len = initial_len - old_trans + new_trans;
        min_val = min(min_val, curr_len);
    }
    cout << min_val << endl;
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