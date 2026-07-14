#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(int n, vector<ll> &a){

    for (int i = 0; i < n-1; ++i){
        ll min_req = (i == 0) ? 1 : a[i - 1] + 1;
        if (a[i] < min_req){
            cout << "NO\n";
            return;
        }

        ll excess = a[i] - min_req;
        a[i] = min_req;
        a[i + 1] += excess;
    }
    ll min_req_last = (n == 1) ? 1 : a[n-2] + 1;
    if (a[n-1] < min_req_last){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &x : a){
            cin >> x;
        }

        solve(n, a);
    }
    return 0;
}