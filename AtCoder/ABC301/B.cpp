// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a){
        cin >> x;
    }

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if (i + 1 < n){
            int curr = a[i];
            int next = a[i + 1];
            if (curr < next){
                for (int j = curr + 1; j < next; ++j){
                    cout << j << " ";
                }
            } else if (curr > next){
                for (int j = curr - 1; j > next; --j){
                    cout << j << " ";
                }
            }
        }
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