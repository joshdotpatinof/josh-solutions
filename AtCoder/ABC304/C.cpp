// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int euclidSquaredDist(pair<int, int> &a, pair<int, int> &b){
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

class DSU{
    private:
        vector<int> parent;
        vector<int> size;
    
    public:
        DSU(int n){
            parent.resize(n);
            iota(parent.begin(), parent.end(), 0);  // parent[i] = i
            size.assign(n, 1);                      // size[i] = 1
        }

        int find(int i){
            if (parent[i] == i){
                return i;
            }
            return parent[i] = find(parent[i]);
        }

        bool unite(int i, int j){
            int root_i = find(i);
            int root_j = find(j);

            if (root_i != root_j){
                if (size[root_i] < size[root_j]){
                    swap(root_i, root_j);
                }

                parent[root_j] = root_i;
                size[root_i] += size[root_j];
                return true;
            }
            return false;
        }

        int getSize(int i){
            return size[find(i)];
        }
};

void solve() {
    int n, d; cin >> n >> d;
    vector<pair<int, int>> a(n);
    for (auto &x : a){
        cin >> x.first >> x.second;
    }

    DSU dsu(n);
    // create edges
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (euclidSquaredDist(a[i], a[j]) <= (d * d)){
               dsu.unite(i, j); 
            }
        }
    }
    cout << "Yes\n";
    for (int i = 1; i < n; ++i){
        if (dsu.find(i) == dsu.find(0)){
            cout << "Yes\n";
        } else {
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