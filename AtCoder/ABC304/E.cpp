// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

struct DSU {
    vector<int> parent;
    vector<int> sz;
    int num_components;

    DSU(int n){
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
        num_components = n;
    }

    int find(int i){
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j){
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j){
            if (sz[root_i] < sz[root_j]) swap(root_i, root_j);
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            num_components--;
            return true;
        }
        return false;
    }

    bool connected(int i, int j){
        return find(i) == find(j);
    }

    int get_size(int i){
        return sz[find(i)];
    }
};

void solve() {
    int n, m; cin >> n >> m;
    DSU dsu(n);    

    while (m--){
        int u, v; cin >> u >> v;
        u--; v--;
        dsu.unite(u, v);    
    }
    int k; cin >> k;
    bool is_good = true;

    unordered_map<int, int> id;
    for (int i = 0; i < n; ++i){
        id[i] = dsu.find(i);
    }

    // for (int i = 0; i < n; ++i){
    //     cout << i << ": " << id[i] << endl;
    // }
    unordered_map<int, unordered_set<int>> mp;

    while (k--){
        int x, y; cin >> x >> y;
        x--; y--;
        if (dsu.connected(x, y)){
            // alr bad graph
            is_good = false;
        }
        mp[id[x]].insert(id[y]);
        mp[id[y]].insert(id[x]);
    }

    int q; cin >> q;
    while(q--){
        int pu, pv; cin >> pu >> pv;
        pu--; pv--;
        if (!is_good){
            // alr bad graph
            cout << "No\n";
            continue;
        }
        if (id[pu] == id[pv]){
            cout << "Yes\n";
        } else { // id[pu] != id[pv]
            // merge
            if (mp[id[pu]].count(id[pv])){
                // there is a constraint between pu and pv (i.e. the connection isn't allowed)
                cout << "No\n";
                continue;
            }
            cout << "Yes\n";
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