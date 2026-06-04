// written by josh.patinof June 4, 2026
// D. Black and White Stripe - https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;    
    int min_count = n;
    int count = 0;
    
    // do_first_window
    for (int i = 0; i < k; ++i){
        if (s[i] == 'W'){
            count++;
        }
    }

    min_count = min(count, min_count);
    for (int i = k; i < n; ++i){
        if (s[i] == 'W'){
            count++;
        }
        if (s[i-k] == 'W'){
            count--;
        }
        min_count = min(count, min_count);
    }
    cout << min_count << endl;
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