// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    string t; cin >> t;
    // can only replace @s with atcoder
    set<char> chars = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    int s_at = 0;
    int t_at = 0;
    vector<int> s_alpha(26, 0);
    vector<int> t_alpha(26, 0);
    
    for (auto c: s){
        if (c == '@'){
            s_at++;
        } else {
            s_alpha[c - 'a']++;
        }
    }

    for (auto c: t){
        if (c == '@'){
            t_at++;
        } else {
            t_alpha[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i){
        if (s_alpha[i] == t_alpha[i]){
            continue; // good
        } else {
            if (s_alpha[i] > t_alpha[i]){
                if (t_at > 0 and chars.count(i + 'a') > 0){
                    t_at = t_at - (s_alpha[i] - t_alpha[i]);
                    if (t_at < 0){
                        cout << "No\n";
                        return;
                    }
                } else {
                    cout << "No\n";
                    return;
                }
            } else { // t_alpha[i] > s_alpha[i]
                if (s_at > 0 and chars.count(i + 'a') > 0){
                    s_at = s_at - (t_alpha[i] - s_alpha[i]);
                    if (s_at < 0){
                        cout << "No\n";
                        return;
                    }
                } else {
                    cout << "No\n";
                    return;
                }
            }
        }
    }

    cout << "Yes\n";
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