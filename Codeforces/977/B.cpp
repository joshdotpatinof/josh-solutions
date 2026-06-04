// written by josh.patinof June 4, 2026
// B. Two-gram - https://codeforces.com/problemset/problem/977/B
# include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    unordered_map<string, ll> mp;
    string ans = "";
    ll cnt = 0;
    
    for (int i = 0; i < n - 1; ++i){
        string curr = "";
        for (int j = i; j < i + 2; j++){
            curr += s[j];
        }
        mp[curr] += 1;
    }

    for (auto [x, y]: mp){
        if (y > cnt){
            cnt = y;
            ans = x;
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}