// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int mx = n; 
    int mn = 1;
    vector<int> lens(n);
    for (int i = n - 2; i >= 0; i--){
        if (s[i] == '<'){
            lens[i+1] = mn;
            mn++;
        } else { // s[i] == '>'
            lens[i+1] = mx;
            mx--;
        }
    }
    if (s[0] == '<'){
        lens[0] = mx;
    } else { // s[0] == '>'
        lens[0] = mn; 
    }
    for (auto x : lens){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// 5
// 2
// <
// 5
// <<><
// 2
// >
// 3
// <>
// 7
// ><>>><

// 2 1 
// 4 3 2 5 1 
// 1 2 
// 2 1 3 
// 3 4 2 5 6 7 1 
