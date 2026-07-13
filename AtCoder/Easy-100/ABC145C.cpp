// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

double dist(int i, int j, vector<int> &x, vector<int> &y){
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];    
    return pow(dx * dx + dy * dy, 0.5);
}

void solve() {
    int n; cin >> n;
    vector<int> x(n + 1);
    vector<int> y(n + 1);
    for (int i = 1; i <= n; ++i){
        cin >> x[i] >> y[i];
    }
    
    double sum = 0.0;
    vector<int> p(n);
    for (int i = 0; i < n; ++i){
        p[i] = i + 1;
    }
    do {
        for (int i = 0; i < n - 1; ++i){
            sum += (dist(p[i], p[i+1], x, y));
        }
    } while (next_permutation(p.begin(), p.end()));
    int Fact = 1;
    for (int i = 2; i <= n; ++i){
        Fact *= i;
    }
    cout << fixed << setprecision(10) << sum / Fact << endl;
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