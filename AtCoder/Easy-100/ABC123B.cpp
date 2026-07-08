// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> a(5);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    int ans = INT_MAX;
    do {
        int curr = 0;
        for (int i = 0; i < 5; ++i){
            curr += a[i];
            if (i < 4 and curr % 10 != 0){
                curr = curr + (10 - (curr % 10));
            }
        }
        ans = min(ans, curr);
    } while (next_permutation(a.begin(), a.end()));
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