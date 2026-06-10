// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    ll sum = (n * (n + 1)) / 2;
    vector<ll> first;
    vector<ll> second;
    if (sum % 2 == 0){
        ll target = sum / 2;
        for (int i = n; i > 0; i--){
            if (target - i >= 0){
                first.push_back(i);
                target -= i;
            } else {
                second.push_back(i);
                continue;
            }
        }
        cout << "YES\n";
        cout << first.size() << endl;
        for (auto x: first){
            cout << x << " ";
        }
        cout << endl;
        cout << second.size() << endl;
        for (auto x: second){
            cout << x << " ";
        } 
        cout << endl;
    } else {
        cout << "NO\n";
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