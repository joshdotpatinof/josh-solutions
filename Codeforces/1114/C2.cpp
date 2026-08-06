// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    string b; cin >> b;

    vector<int> a_even, b_even;
    vector<int> a_odd, b_odd;

    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            if (a[i] == '1'){
                a_even.push_back(i / 2);
            }
            if (b[i] == '1'){
                b_even.push_back(i / 2);
            }
        } else {
            if (a[i] == '1'){
                a_odd.push_back(i / 2);
            }
            if (b[i] == '1'){
                b_odd.push_back(i / 2);
            }
        }
    }
    
    if (a_even.size() == b_even.size() and a_odd.size() == b_odd.size()){
        ll min_ops = 0;
        for (size_t i = 0; i < a_even.size(); ++i){
            min_ops += abs(a_even[i] - b_even[i]);
        }

        for (size_t i = 0; i < a_odd.size(); ++i){
            min_ops += abs(a_odd[i] - b_odd[i]);
        }

        cout << min_ops << endl;
    } else {
        cout << "-1\n";
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
    solve();
    }
    return 0;
}