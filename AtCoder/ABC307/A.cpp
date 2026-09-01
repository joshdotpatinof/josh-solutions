// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> a(7 * n);
    for (int i = 0; i < 7 * n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        int start = 7 * i;
        ll sum = 0;
        for (int j = start; j < start + 7; ++j){
            sum += a[j];
        }
        cout << sum << " ";
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