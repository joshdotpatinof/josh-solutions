// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isPalindrome(string &s){
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t){
        return true;
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    for (auto &x : a){
        cin >> x;
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (i != j){
                string test = a[i];
                for (char c : a[j]){
                    test += c;
                }
                if (isPalindrome(test)){
                    cout << "Yes\n";
                    return;
                }
            }
        }
    }

    cout << "No\n";
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