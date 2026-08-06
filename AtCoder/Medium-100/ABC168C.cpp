// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define PI 3.14159265358979323846264338327950L

void solve() {
    int a, b, h, m; cin >> a >> b >> h >> m;
    long double rad = PI * 2 * ((long double)h / 12.0 + ((long double)m / 60.0) / 12.0 - (long double)m / 60.0);
    long double rsq = (long double)(a * a + b * b) - (long double)(2 * a * b) * cosl(rad);

    printf("%20.20Lf\n", sqrtl(rsq));
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