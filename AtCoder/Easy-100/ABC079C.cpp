// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void find_ops(int i, int val, string &ans, string curr, vector<int> &a, string &s){
    if (i == 4){
        if (val == 7){
            ans = curr;
            return;
        } else{
            return;
        }
    }

    // '+'
    if (i != 0){
        find_ops(i + 1, val + a[i], ans, curr + '+' + s[i], a, s);
    // '-'
        find_ops(i + 1, val - a[i], ans, curr + '-' + s[i], a, s);
    } else {
        find_ops(i + 1, val + a[i], ans, curr + s[i], a, s);
    }
}

void solve() {
    string s; cin >> s;
    vector<int> a;
    for (auto c : s){
        a.push_back(c - '0');
    }
    // just bruteforce, 2^3 = 8 ways to assign operations, and guaranteed a soln anyways

    string ans = "";
    find_ops(0, 0, ans, "", a, s);
    cout << ans << "=7" << endl;
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