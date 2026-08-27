// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<string> g(n);
    for (auto &x: g){
        cin >> x;
    }
    vector<int> p(n);
    for (int i = 0; i < n; ++i){
        p[i] = i;
    }

    do{
        
        bool is_answer = true;
        for (int i = 1; i < n; ++i){
            int diff = 0;
            for (int j = 0; j < m; ++j){
                if (g[p[i]][j] != g[p[i-1]][j]){
                    diff++;
                }
            }
            // cout << sum << endl;
            if (diff > 1){
                is_answer = false;
                break;
            }
        }
        
        if (is_answer){
            cout << "Yes\n";
            return;
        }
    } while (next_permutation(p.begin(), p.end()));
    cout << "No\n";
    // cout << endl;
    // for (auto x: g){
    //     cout << x << endl;
    // }
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