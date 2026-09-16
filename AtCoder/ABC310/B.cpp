// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, unordered_set<int>>> prods(n);
    for (int i = 0; i < n; ++i){
        int p, c; cin >> p >> c;
        unordered_set<int> st;
        for (int j = 0; j < c; ++j){
            int f; cin >> f;
            st.insert(f);
        }
        prods[i] = {p, st};
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (prods[i].first >= prods[j].first){
                bool has_all = true;

                for (auto x : prods[i].second){
                    if (prods[j].second.count(x) == 0){
                        has_all = false;
                        break;
                    }
                }
                if (has_all){
                    if (prods[i].first > prods[j].first or prods[j].second.size() > prods[i].second.size()){
                        cout << "Yes\n";
                        return;
                    }
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