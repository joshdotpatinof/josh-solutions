// written by josh.patinof June 4, 2026
// C. K-th Not Divisible by n - https://codeforces.com/problemset/problem/1352/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, k; cin >> n >> k;
    ll lo = 1, hi = INT_MAX;
    ll ans = -1;
    while (lo <= hi){
        ll mi = lo + (hi - lo) / 2;
        ll count_x = mi - (mi / n);

        if (count_x >= k){
            ans = mi;
            hi = mi - 1;
        } else {
            lo = mi + 1; 
        }
    }
    cout << ans << endl;    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}