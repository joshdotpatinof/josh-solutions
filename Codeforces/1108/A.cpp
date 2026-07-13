// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int n) {
    int c = 0;
    vector<int> a(n);
    int i = 0; // 1
    int j = 1; // 2
    for (int k = 1; k <= n; ++k){
        if (k % 2 == 0){
            a[i] = k;
            i += 2;
        } else {
            a[j] = k;
            j += 2; 
        }
    }

    for (auto x: a){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}