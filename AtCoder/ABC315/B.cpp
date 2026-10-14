// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int m; cin >> m;
    vector<int> a(m);
    int sum = 0;
    for (int i = 0; i < m ; ++i){
        cin >> a[i];
        sum += a[i];
    }

    int mi = (sum / 2) + 1;
    
    int month = -1, day = -1;
    int curr = 0;
    for (int i = 0; i < m; ++i){
        if (curr + a[i] < mi){
            curr += a[i]; 
        } else { // curr + a[i] >= mi
            // we're on the month where the middle day is
            month = i + 1;
            // cout << "mi: " << mi << " vs " << curr << endl;
            day = (mi - curr);
            break;
        }
    }

    cout << month << " " << day << endl;
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