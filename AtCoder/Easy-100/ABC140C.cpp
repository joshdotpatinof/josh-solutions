// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    int n; cin >> n;
    vector<int> b(n-1);
    for (auto &x : b){
        cin >> x;
    }
    int sum = 0;
    sum += b[0];
    for (int i = 1; i < n - 1; ++i){
        sum += (min(b[i-1], b[i]));
    }
    sum += b[n-2];
    cout << sum << endl;
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

