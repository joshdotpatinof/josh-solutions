// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int getMex(int a, int b, int c){
    set<int> st = {a, b, c};
    if (st.count(0) == 0) return 0;
    if (st.count(1) == 0) return 1;
    if (st.count(2) == 0) return 2;
    return 3;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &num: a) cin >> num;
    string s; cin >> s;
    vector<vector<ll>> left_m(n, vector<ll>(3, 0));
    ll m_counts[3] = {0, 0, 0};
    for (ll i = 0; i < n; ++i){
        for (ll v = 0; v < 3; ++v){
            left_m[i][v] = m_counts[v];
        }
        if (s[i] == 'M'){
            m_counts[a[i]]++;
        }
    }
    
    vector<vector<ll>> right_x(n, vector<ll>(3, 0));
    ll x_counts[3] = {0, 0, 0};
    for (ll i = n-1; i >= 0; --i){
        for (ll v = 0; v < 3; ++v){
            right_x[i][v] = x_counts[v];
        }
        if (s[i] == 'X'){
            x_counts[a[i]]++;
        }
    }
    ll ans = 0;

    for (ll j = 0; j < n; ++j){
        if (s[j] == 'E'){
            ll e_val = a[j];
            for (ll m_val = 0; m_val < 3; ++m_val){
                for (ll x_val = 0; x_val < 3; ++x_val){
                    ll count_m = left_m[j][m_val];
                    ll count_x = right_x[j][x_val];

                    ll ways = count_m * count_x;
                    if (ways > 0){
                        ans += ways * getMex(m_val, e_val, x_val);
                    }
                }
            }
        }
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