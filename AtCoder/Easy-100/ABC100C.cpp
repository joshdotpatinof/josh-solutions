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
    int count = 0;
    for (int i = 0; i < n; ++i){
        int tmp = a[i];
        while (tmp % 2 == 0){
            tmp/=2;
            count++;
        }
    }
    cout << count << endl;
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