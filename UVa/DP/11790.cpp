// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int t) {
    int n; cin >> n;
    vector<ll> h(n);
    vector<ll> w(n);
    for (auto &x : h) cin >> x;
    for (auto &x : w) cin >> x;

    vector<ll> lds(w.begin(), w.end());
    vector<ll> lis(w.begin(), w.end());

    ll max_lis = *max_element(w.begin(), w.end());
    ll max_lds = *max_element(w.begin(), w.end());
     
    for (int i = 1; i < n; ++i){
        for (int j = 0; j < i; ++j){
            if (h[j] < h[i]){
                lis[i] = max(lis[i], lis[j] + w[i]);
            
            }

            if (h[j] > h[i]){
                lds[i] = max(lds[i], lds[j] + w[i]);
            }
        }
        max_lds = max(max_lds, lds[i]);
        max_lis = max(max_lis, lis[i]);
    }


    if (max_lis >= max_lds){
        cout << "Case " << t << ". Increasing (" << max_lis << "). Decreasing (" << max_lds << ").\n";
    } else {
        cout << "Case " << t << ". Decreasing (" << max_lds << "). Increasing (" << max_lis << ").\n";
    }
}

int main() {
    fast_io;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
    }
    return 0;
}