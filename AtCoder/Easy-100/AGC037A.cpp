// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    string prev = "";
    for (int i = 0; i < n; ++i){
        // cout << prev << endl;
        if (i == 0){
            // do length 1 at start
            prev += s[i];
            ans++;
            continue;
        } else {
            // try length 1 first
            string for_comp = "";
            for_comp += s[i];
            if (for_comp != prev){
                ans++;
                prev = for_comp;
            } else {
                if ((i + 1) == n){
                    // just absorb
                    break;
                } else {
                    for_comp += s[i+1];
                    i++;
                } 
                ans++;
                prev = for_comp;
            }
        }
    }
    cout << ans << endl;
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