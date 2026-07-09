// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool is_lowercase(char c){
    if (c >= 'a' and c <= 'z'){
        return true;
    }
    return false;
}

void solve() {
    string s; cin >> s;
    int n = s.size();
    if (s[0] != 'A'){
        cout << "WA\n";
        return;
    }

    if (!is_lowercase(s[1])){
        cout << "WA\n";
        return;
    }

    int count_of_big_c = 0;
    for (int i = 2; i <= n-2; ++i){
        if (s[i] == 'C'){
            count_of_big_c++;
        } else {
            if (!is_lowercase(s[i])){
                cout << "WA\n";
                return;
            }
        }
    }

    if (!is_lowercase(s[n-1])){
        cout << "WA\n";
        return;
    }
    if (count_of_big_c != 1){
        cout << "WA\n";
        return;
    }

    cout << "AC\n";
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