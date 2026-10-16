// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Elephant {
    int w, iq, id;
};

void solve() {
    vector<Elephant> es;
    int w, i;
    int id = 1;
    while (cin >> w >> i){
        es.push_back({w, i, id});
        id++;
    }
    int n = es.size();
    if (n == 0) return;
    sort(es.begin(), es.end(), [](const Elephant& a, const Elephant& b){
        if (a.w != b.w) return a.w < b.w;
        return a.iq > b.iq;
    });

    vector<int> p(n, -1);
    vector<int> lis(n, 1);
    int max_len = 1; // replace with sentinel
    int best_idx = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            if (es[j].w < es[i].w and es[j].iq > es[i].iq){
                if (lis[i] < lis[j] + 1){
                    lis[i] = lis[j] + 1;
                    p[i] = j;
                }
            }
        }
        if (lis[i] > max_len){
            max_len = lis[i];
            best_idx = i;
        }
    }

    vector<int> subseq;
    int curr = best_idx;
    while (curr != -1){
        subseq.push_back(es[curr].id);
        curr = p[curr];
    }

    reverse(subseq.begin(), subseq.end());
    cout << max_len << endl;
    for (int idx : subseq){
        cout << idx << endl;
    }
    // cout << max_val << endl;
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

// ws | iqs
// 1000 4000
// 1100 3000
// 6000 2000
// 8000 1400