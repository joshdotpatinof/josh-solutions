// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool verifier(vector<ll> &arr){
    bool ret = true;
    for (auto x: arr){
        if (x % 2 != 0){
            ret = false;
            break;
        }
    }
    return ret;
}
void solve() {
    ll a, b, c; cin >> a >> b >> c;

    if ((a == b  and b == c) and a % 2 == 0){
        cout << -1 << endl;
        return;
    }

    if (a % 2 != 0 or b % 2 != 0 or c % 2 != 0){
        cout << 0 << endl;
        return;
    }

    vector<ll> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    ll count = 0;
    while (verifier(arr)){
        ll A = arr[0], B = arr[1], C = arr[2];

        arr[0] = (A + B) / 2;
        arr[1] = (B + C) / 2;
        arr[2] = (A + C) / 2;
        count++;
        sort(arr.begin(), arr.end());
    }
    cout << count << endl;
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