#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;

void solve(ll n, ll k, vector<ll> &a){
    ll ans = a[k-1];
    // verify if this is actually a possible answer
    if (k < n and a[k] == ans){
        ans = -1;
    }

    if (k == 0){
        ans = -1;
        if (a[0] > 1){
            ans = 1;
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (auto &x: a){
        cin >> x;
    }
    sort(a.begin(), a.end());
    solve(n, k, a);
    return 0;
}