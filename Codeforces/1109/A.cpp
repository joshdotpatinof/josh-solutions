#include <bits/stdc++.h>

using namespace std;

void solve(int n, string &s){
    int max_len = 0;
    int curr = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] == '#'){
            curr++;
        } else {
            curr = 0; // reset
        }

        max_len = max(max_len, curr);
    }

    if (max_len == 0){
        cout << 0 << endl;
        return;
    }

    if (max_len % 2 == 0){
        cout << max_len / 2 << endl;
    } else {
        cout << (max_len + 1) / 2 << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--)
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string s; cin >> s;
        solve(n, s);
    }
    return 0;
}

