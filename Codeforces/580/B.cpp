// written by josh.patinof June 4, 2026
// B. Kefa and Company - https://codeforces.com/problemset/problem/580/B
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(ll n, ll d){
    vector<pair<ll, ll>> a(n);
    for (auto &x: a){
        cin >> x.first >> x.second; // m, f
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    ll s = 0;
    int l = 0;

    for (int r = 0; r < n; ++r){
        s += a[r].second;
        
        while (a[r].first - a[l].first >= d){
            s -= a[l].second;
            l++;
        }

        ans = max(ans, s);
    }    
    cout << ans << endl;    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, d; cin >> n >> d;
    solve(n, d);
    return 0;
}
