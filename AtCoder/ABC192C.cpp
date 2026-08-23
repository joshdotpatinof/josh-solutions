// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll MAX = 1e9 + 1;

ll g1(ll n){
    vector<ll> freq(10, 0);
    // descending
    while (n != 0){
        freq[n % 10]++;
        n /= 10;
    }
    ll ans = 0;
    for (int i = 9; i >= 0; --i){
        if (freq[i] > 0){
            while (freq[i] > 0){
                ans *= 10;
                ans += i;
                freq[i]--;
            }
        }
    }

    return ans;
}

ll g2(ll n){
    vector<ll> freq(10, 0);
    // ascending
    ll ans = 0;
    while (n != 0){
        freq[n % 10]++;
        n /= 10;
    }

    for (int i = 1; i < 10; ++i){
        if (freq[i] > 0){
            while (freq[i] > 0){
                ans *= 10;
                ans += i;
                freq[i]--;
            }
        }
    }

    return ans;
}

ll f(ll gone, ll gtwo){
    return gone - gtwo;
}

void solve() {
    ll n, k; cin >> n >> k;
    // dp? map for memoization?
    // dp[i] = f(i) , -1 if not found 
    // vector<ll> dp(MAX, -1);
    ll a = n;
    for (int i = 1; i <= k; ++i){
        a = f(g1(a), g2(a));

        if (a == 0){
            break;
        }
    }
    // cout << g1(n) << endl;
    // cout << g2(n) << endl;
    cout << a << endl;
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