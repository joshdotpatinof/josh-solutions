// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string n; cin >> n;
    int sum = 0;
    int len = n.size();
    
    if (n[0] != '1'){
        sum += ((n[0] - '0') - 1);
    }
    sum += (9 * (len-1));
    int sum_of_n = 0;
    for (int i = 0; i < len; ++i){
        sum_of_n += (n[i] - '0');
    }
    sum = max(sum, sum_of_n);
    cout << sum << endl;
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