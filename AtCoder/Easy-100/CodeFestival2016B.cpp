// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    int num_of_passers = 0;
    int current_overseas_ranking = 0;
    for (int i = 0; i < n; ++i){
        if (s[i] == 'a'){
            if (num_of_passers < (a + b)){
                num_of_passers++;
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else if (s[i] == 'b'){
            if (num_of_passers < (a + b) and (current_overseas_ranking + 1) <= b){
                num_of_passers++;
                cout << "Yes\n";

            } else {
                cout << "No\n";
            }
            current_overseas_ranking++;
        } else { // s[i] == 'c'
            cout << "No\n";
        }
    }
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