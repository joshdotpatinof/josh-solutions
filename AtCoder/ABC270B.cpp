// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x, y, z; cin >> x >> y >> z;
    // x - goal
    // y - wall
    // z - hammer
    int ans = 0;
    if ((x > 0 and y > 0 and y <= x) or (x < 0 and y < 0 and x <= y)){
        // check if you can go to z to get hammer
        if (y > 0){
            if (z < y){
                // go to z
                ans += (abs(z));
                // go to x from z
                ans += (x - z);
                cout << ans << endl;
            } else {
                cout << -1 << endl;
            }
            return;
        } else { // y < 0
            if (z > y){
                ans += (abs(z));
                ans += (z - x);
                cout << ans << endl;
                
            } else {
                cout << -1  << endl;
            }
            return;
        }
    }

    // y doesn't hinder movement
    cout << abs(x) << endl;
    
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