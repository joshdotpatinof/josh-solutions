// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MAXN = 101;
vector<int> tin(MAXN, -1);
vector<int> low(MAXN);
vector<bool> in_stack(MAXN, false);
stack<int> st;

int timer = 0;

void dfs(int u, vector<vector<int>> &adj, vector<vector<int>> &sccs){
        tin[u] = low[u] = timer++;
        st.push(u);
        in_stack[u] = true;
        for (int v: adj[u]){
            if (tin[v] == -1){
                dfs(v, adj, sccs);
                low[u] = min(low[u], low[v]);
            } else if (in_stack[v]){
                low[u] = min(low[u], tin[v]);
            }
        }

        if (low[u] == tin[u]){
            vector<int> scc;
            while (true){
                int node = st.top(); st.pop();
                in_stack[node] = false;
                scc.push_back(node);
                if (node == u){
                    break;
                }
            }
            sccs.push_back(scc);
        }
}

void solve() {
    int n; cin >> n;
    unordered_map<string, int> mp; // mp[item] = person i "person i has item" 
    vector<tuple<string, string, string>> a(n); // person, has, wants
    
    for (int i = 0; i < n; ++i){
        cin >> get<0>(a[i]) >> get<1>(a[i]) >> get<2>(a[i]);
        mp[get<1>(a[i])] = i + 1; // 1-indexing
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n; ++i){
        string wants = get<2>(a[i]);
        if (mp.count(wants)){
            adj[i + 1].push_back(mp[wants]);
        }
    }

    // for (int i = 0; i < n; ++i){
    //     cout << i + 1 << ": ";
    //     for (auto x: adj[i + 1]){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> sccs;
    tin.assign(n + 1, -1);
    low.assign(n + 1, -1);
    in_stack.assign(n + 1, false);
    timer = 0;

    for (int i = 1; i <= n; ++i){
        if (tin[i] == -1){
            dfs(i, adj, sccs);
        }
    }
    int max_ans = 0;

    for (const auto& scc: sccs){
        max_ans = max(max_ans, (int)scc.size());
    }
    if (max_ans < 2){
        cout << "No trades possible\n";
    } else {
        cout << max_ans << endl;
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