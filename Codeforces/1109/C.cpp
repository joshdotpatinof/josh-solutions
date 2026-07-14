#include <bits/stdc++.h>

using namespace std;

struct DSU{
    vector<int> parent;
    DSU(int n){
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int i){
        if (parent[i] == i){
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    void unite(int i, int j){
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j){
            parent[root_i] = root_j;
        }
    }

};

void solve(int n, int x, int y, vector<int> &p){
    DSU dsu(n);
    for (int i = 1; i <= n; ++i){
        if (i + x <= n){
            dsu.unite(i, i + x);
        }

        if (i + y <= n){
            dsu.unite(i, i + y);
        }
    }
    for (int i = 1; i <= n; ++i){
        if (dsu.find(i) != dsu.find(p[i])){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n, x, y; cin >> n >> x >> y;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }
        solve(n, x, y, p);

    }
    return 0;
}