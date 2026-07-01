// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool is_equal_vectors(vector<ll> &a, vector<ll> &b){
    if (a.size() != b.size()){
        return false;
    }
    ll n = a.size();
    for (int i = 0; i < n; ++i){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void solve() {
    ll n; cin >> n;
    vector<ll> p(n);
    vector<ll> q(n);
    for (auto &x: p){
        cin >> x;
    }

    for (auto &y: q){
        cin >> y;
    }
    ll p_idx = -1;
    ll q_idx = -1;
    vector<ll> perm(n);
    for (ll i = 0; i < n; ++i){
        perm[i] = i + 1;
    } 
    ll idx = 1;
    do {
        if (is_equal_vectors(perm, p)){
            p_idx = idx;
        }

        if (is_equal_vectors(perm, q)){
            q_idx = idx;
        }
        idx++;
    } while (next_permutation(perm.begin(), perm.end()));
    cout << abs(p_idx - q_idx);
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