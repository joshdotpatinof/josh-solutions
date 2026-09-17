// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int f(int i, const vector<int> &a){
    return a[i];
}

int findCycle(int start, const vector<int> &a){
    int slow = start;
    int fast = start;
    while (true){
        slow = f(slow, a);
        fast = f(f(fast, a), a);
        if (slow == fast){
            return slow; // point where they meet
        }
    }
}

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    // cycle point

    int cycle_point = findCycle(1, a);
    vector<int> ans;
    ans.push_back(cycle_point);
    int ptr = f(cycle_point, a);
    while (ptr != cycle_point){
        ans.push_back(ptr);
        ptr = f(ptr, a);
    }

    cout << ans.size() << endl;
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
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