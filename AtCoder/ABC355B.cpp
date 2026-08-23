// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    unordered_set<int> in_a;
    vector<int> c;
    vector<int> a(n);
    for (auto &x : a){
        cin >> x;
        in_a.insert(x);
        c.push_back(x);
    }
    vector<int> b(m);
    for (auto &x : b){
        cin >> x;
        c.push_back(x);
    }
    sort(c.begin(), c.end());    
    for (int i = 1; i < (n + m); ++i){
        if (in_a.count(c[i]) > 0 and in_a.count(c[i-1]) > 0){
            cout << "Yes\n";
            return;
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