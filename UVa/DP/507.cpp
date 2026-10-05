// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int b; cin >> b;
    for (int route = 1; route <= b; ++route){
        int s; cin >> s;
        vector<int> S(s-1);
        for (auto &a : S) cin >> a;
        ll curr = 0;
        ll global_max = 0;
        int start = 0;
        int best_start = 0, best_end = 0;
        for (int i = 0; i < s - 1; ++i){
            curr += S[i];
            if (curr > global_max or (curr == global_max and (i - start) > (best_end - best_start))){
                global_max = curr;
                best_start = start;
                best_end = i;
            }

            if (curr < 0){
                curr = 0;
                start = i + 1;
            }
        }

        if (global_max <= 0){
            cout << "Route " << route << " has no nice parts\n";
        } else {
            cout << "The nicest part of route " << route << " is between stops " << best_start + 1 << " and " << best_end + 2 << endl;
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