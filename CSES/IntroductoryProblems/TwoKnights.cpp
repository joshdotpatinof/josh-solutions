// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n; cin >> n;
    cout << 0 << endl;
    for (ll i = 2; i <= n; ++i){
        ll sz = i * i;
        ll tot = (sz * (sz - 1)) / 2;
        
        if (i == 2){
            cout << tot << endl;
            continue;
        }
        
        // i >= 3
        tot -= (4 * (i - 1) * (i - 2));
        // sides
        // if (i > 2){
        //     tot -= 8; // 4 * 2
        // }
        // // inner 
        // if (i > 2){
        //     if (i > 3){
        //         ll side = (i - 2);
        //         ll inner_area = side * side;
                
        //         if (i == 4){
        //             tot -= 16; // 4 * 4
        //         } else {
        //             tot -= 16; // 4 * 4
        //             tot -= ((side - 2) * 4 * 6);    
        //             ll inner_inner_area = (side - 2) * (side - 2);
        //             tot -= (inner_inner_area * 8);
        //         }   
        //     }
        // }


        cout << tot << endl;        
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