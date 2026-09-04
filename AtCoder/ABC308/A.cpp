// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> a(8);
    for (auto &x : a){
        cin >> x;
    }

    for (int i = 0; i < 7; ++i){
        if (a[i] > a[i+1]){
            cout << "No\n";
            return;
        }

        if ((a[i] % 25 != 0) or (a[i+1] % 25 != 0)){
            cout << "No\n";
            return;
        }

        if (!(a[i] >= 100 and a[i] <= 675)){
            cout << "No\n";
            return;
        }

        if (!(a[i+1] >= 100 and a[i+1] <= 675)){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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