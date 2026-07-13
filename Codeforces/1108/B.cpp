// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(int n) {
    if (n == 1){
        cout << 1 << endl;        
        return;
    } 
    
    if (n == 2){
        cout << -1 << endl;
        return;
    }
    // vector<ll> a(n);
    ll s = 3;
    
    cout << 1 << " " << 2 << " ";
    for (int i = 0; i < n - 2; ++i){
        cout << s << " ";
        s *= 2;
    }
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}