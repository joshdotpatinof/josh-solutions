// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const ll NEGINF = -2e18;

void solve(int n, int m, vector<ll> &a) {
    priority_queue<ll> max_heap;
    ll curr = 0;
    ll max_score = NEGINF;

    for (int i = 0; i < n; ++i){
        if (i >= m - 1){
            ll score = m * a[i] - curr;
            max_score = max(max_score, score);
        }

        if (m - 1 > 0) {
            max_heap.push(a[i]);
            curr += a[i];
            if (max_heap.size() > m - 1) {
                curr -= max_heap.top();
                max_heap.pop();
            }
        }
    }
    cout << max_score << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        solve(n, m, a);
    }
    return 0;
}