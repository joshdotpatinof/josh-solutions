// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 998244353;

// bool isParenthesisString(string &s){
//     int n = s.size();
//     stack<int> stk;
//     for (int i = 0; i < n; ++i){
//         if (s[i] == '('){
//             stk.push(i);
//         } else {
//             if (stk.empty()){
//                 return false;
//             }
//             stk.pop();
//         }
//     }

//     if (!stk.empty()){
//         return false;
//     }

//     return true;
// }

// int solver(int i, const string &s, string curr, const int n){
//     if (i == n){
//         return isParenthesisString(curr);
//     }
//     int ans = 0;
//     if (s[i] != '?'){
//         ans = (ans + solver(i + 1, s, curr + s[i], n)) % MOD;
//     } else { 
//         ans = (ans + solver(i + 1, s, curr + '(', n)) % MOD;
//         ans = (ans + solver(i + 1, s, curr + ')', n)) % MOD;
//     }

//     return ans % MOD;

// }

void solve() {
    string s; cin >> s;
    int n = s.size();
    if (n % 2 != 0){
        cout << 0 << endl;
        return;
    }

    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    
    for (int i = 0; i < n; ++i){
        for (int i = 0; i <= n; ++i){
            cout << dp[i] << ' ';
        }
        cout << endl;
        vector<ll> next_dp(n + 1, 0);
        for (int j = 0; j < n; ++j){
            if (dp[j] == 0) continue;
            if (s[i] == '(' or s[i] == '?'){
                if (j + 1 <= n){
                    next_dp[j + 1] = (next_dp[j + 1] + dp[j]) % MOD;
                }
            }
            if (s[i] == ')' or s[i] == '?'){
                if (j - 1 >= 0){
                    next_dp[j-1] = (next_dp[j-1] + dp[j]) % MOD;
                }
            }
        }
        dp = move(next_dp);
        
    }

    cout << dp[0] << endl;
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