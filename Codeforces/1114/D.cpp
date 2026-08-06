// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<ll> b(n);
    for (auto &x : b){
        cin >> x;
    }

    map<ll, int> freq;
    for (ll x : b){
        freq[x]++;
    }
    
    if (freq.begin()->first != 0) {
        cout << -1 << "\n";
        return;
    }
    
    vector<ll> B;
    vector<int> counts;
    for (auto const& [val, count] : freq){
        B.push_back(val);
        counts.push_back(count);
    }

    int k = B.size();
    vector<ll> A(k);

    for (int m = 0; m < k - 1; ++m){
        ll diff = B[m + 1] - B[m];
        int count = counts[m];
        if (diff % count != 0){
            cout << -1 << endl;
            return;
        }

        A[m] = diff / count;

        if (A[m] <= 0 or (m > 0 and A[m] <= A[m-1])){
            cout << -1 << endl;
            return;
        }

    }

    if (k == 1){
        A[0] = 1;
    } else {
        A[k - 1] = A[k - 2] + 1;
    }

    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        int idx = lower_bound(B.begin(), B.end(), b[i]) - B.begin();
        a[i] = A[idx];
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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