// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(ll n, ll a, ll c, ll b, vector<pair<ll, ll>> &moves) {
    if (n == 0){
        return;
    }  
    solve(n-1, a, b, c, moves);
    moves.push_back({a, c});
    solve(n-1, b, c, a, moves);
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    ll n; cin >> n;
    vector<pair<ll, ll>> moves;
    solve(n, 1, 3, 2, moves);
    cout << moves.size() << endl;
    for (auto [x, y]: moves){
        cout << x << " " << y << endl;
    }
    //}
    return 0;
}