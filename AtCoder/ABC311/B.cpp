// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int d; cin >> d;
    vector<string> S(n);
    for (auto &s : S) cin >> s;
    int curr_len = 0;
    int max_days = curr_len;
    for (int i = 0; i < d; ++i){
        int count = 0;
        for (int j = 0; j < n; ++j){
            if (S[j][i] == 'o'){
                count++;
            } else {
                // S[j][i] == 'x'
                break;
            }
        }

        if (count == n){
            curr_len++;
        } else {
            curr_len = 0; // reset
        }

        max_days = max(max_days, curr_len);
    }

    cout << max_days << endl;
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