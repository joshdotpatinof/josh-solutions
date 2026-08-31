// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    pair<int, int> smallest = {-1, INT_MAX}; 
    vector<pair<string, int>> a(n);
    for (int i = 0; i < n; ++i){
        string s; cin >> s;
        int x; cin >> x;
        a[i].first = s;
        a[i].second = x;

        if (a[i].second < smallest.second){
            smallest.first = i;
            smallest.second = a[i].second;
        }
    }
    

    for (int i = smallest.first; i < n; ++i){
        cout << a[i].first << endl; 
    }

    for (int i = 0; i < smallest.first; ++i){
        cout << a[i].first << endl; 
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