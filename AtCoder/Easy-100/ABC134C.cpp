// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll query(ll l, ll r, vector<vector<ll>> &arr){
    ll j = (ll)log2(r - l + 1);
    if (arr[l][j] >= arr[r - (1 << j) + 1][j]){
        return arr[l][j];
    } else {
        return arr[r - (1 << j) + 1][j];
    }
}

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    
    vector<vector<ll>> arr(n + 1, vector<ll>(log2(n) + 1));

    for (ll i = 0; i < n; ++i){
        arr[i][0] = a[i];
    }

    for (ll j = 1; (1 << j) <= n; ++j){
        for (ll i = 0; (i + (1 << j) - 1) < n; ++i){
            if (arr[i][j-1] > arr[i + (1 << (j - 1))][j-1]){
                arr[i][j] = arr[i][j-1];
            } else {
                arr[i][j] = arr[i + (1 << (j - 1))][j-1];
            }
        }
    }

    for (ll q = 0; q < n; ++q){
        // first query
        
        ll first_maxima = -1;
        ll second_maxima = -1;

        ll first_l = 0;
        ll first_r = q-1;
        if (q > 0){
            first_maxima = query(first_l, first_r, arr);
        } 

        ll second_l = q + 1;
        ll second_r = n - 1;
        if (q < n - 1){
            second_maxima = query(second_l, second_r, arr);
        }
        
        ll maxima = max(first_maxima, second_maxima);
        cout << maxima << endl;
    }
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