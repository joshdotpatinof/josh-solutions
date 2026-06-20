// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());

    int ans = INT_MAX;
    for (int i = a[0]; i <= a[n-1]; ++i){
        int curr_stamina = 0;
        for (int j = 0; j < n; ++j){
            curr_stamina += ((a[j] - i) * (a[j] - i)); 
        } 
        ans = min(ans, curr_stamina);
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