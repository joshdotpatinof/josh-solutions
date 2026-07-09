// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b; cin >> a >> b;
    ll ans = 0;
    ll c = a;

    while (c <= b){
        // check if palindrome
        ll first = c;
        bool is_palindrome = true;
        first /= 1e4;

        if (c % 10 != 0 and c % 10 == first % 10){
            // passes first check
            ll second_one = c;
            ll second_two = c;
            second_one /= 10;
            second_two /= 1e3;
            if (second_one % 10 == second_two % 10){
                // passes second check
            } else {
                is_palindrome = false;
            }
        } else {
            is_palindrome = false;
        }

        ans += (is_palindrome);
        c++;
    }

    cout << ans << endl;
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