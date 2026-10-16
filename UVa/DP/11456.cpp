// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<int> tr(n);

    for (int i = 0; i < n; ++i){
        cin >> tr[i];
    }
    
    if (n == 0){
        cout << 0 << endl;
        return;
    }
    
    vector<int> lis(n, 1);
    vector<int> lds(n, 1);
    int max_val = 0;

    for (int i = n-1; i >= 0; --i){
        for (int j = n-1; j > i; --j){
            if (tr[j] > tr[i]){
                lis[i] = max(lis[i], lis[j] + 1);
            }

            if (tr[j] < tr[i]){
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
        max_val = max(max_val, lis[i] + lds[i] - 1);
    }
    
    for (int i = 0; i < n; ++i){
        cout << i << ": " << lis[i] << " " << lds[i] << endl;
    }
    cout << max_val << endl;    
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
