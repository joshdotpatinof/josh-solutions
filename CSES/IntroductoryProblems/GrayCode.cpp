// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<string> solve(ll n) {
    vector<string> res;
    for (ll i = 0; i < (1 << n); ++i){
        ll g = i ^ (i >> 1);
        string c = "";
        for (ll j = n - 1; j >= 0; j--){
            c += (g & (1 << j)) ? '1' : '0';
        }
        res.push_back(c);
    }
    return res;
}

int main() {
    fast_io;
    //int t = 1;
    //cin >> t;
    //while (t--) {
    ll n = 2;
    cin >> n;
    vector<string> res = solve(n);
    for (string c: res){
        cout << c << endl;
    }
    // solve();
    //}
    return 0;
}