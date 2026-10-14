// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

struct DSU {
    vector<int> parent;
    vector<int> sz;
    int num_components;

    DSU (int n) {
        parent.resize(n+1);
        sz.assign(n+1, 1);
        iota(parent.begin(), parent.end(), 1);
        num_components = n;
    }

    int find(int i){
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j){
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j){ // not the same comp
            if (sz[root_j] > sz[root_i]) swap(root_i, root_j); // root_i is always the biggest
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

    int get_sz(int i){
        return sz[i];
    }
};

bool inBounds(int i, int j, const int h, const int w){
    if (0 <= i and i < h and 0 <= j and j < w) return true;
    return false;
}

int toIdx(int i, int j, const int h, const int w){
    return i * w + j;
}

void solve() {
    int h, w; cin >> h >> w;
    cout << "arr\n";
    vector<string> g(h);
    for (auto &s : g) cin >> s;

    vector<int> dis = {-1, 1, 0, 0};
    vector<int> djs= {0, 0, -1, 1};
    DSU dsu(h*w);

    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            for (int k = 0; k < 4; ++k){
                cout << "here\n";
                if (inBounds(i + dis[k], j + djs[k], h, w)){
                    dsu.unite(toIdx(i, j, h, w), toIdx(i + dis[k], j + djs[k], h, w));
                }
            }
        }
    }

    for (int i = 0; i < dsu.parent.size(); ++i){
        cout << "i: " << i << " " << dsu.parent[i] << endl;
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