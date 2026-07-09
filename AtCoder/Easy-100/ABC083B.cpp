// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int get_sum_of_digits(int num){
    int ans = 0;
    while (true){
        if (num == 0){
            break;
        }

        ans += (num % 10);
        num /= 10;
    }
    return ans;
}

void solve() {
    int n, a, b; cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        int sum = get_sum_of_digits(i);
        if (sum >= a and sum <= b){
            ans += i;
        }
    }
    cout << ans << endl;
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