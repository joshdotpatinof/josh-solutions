// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<vector<ll>> bingo(3, vector<ll>(3));
    
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> bingo[i][j];
        }
    }

    int n; cin >> n;
    for (int i = 0; i < n; ++i){
        ll x; cin >> x;
        for (int j = 0; j < 3; ++j){
            for (int k = 0; k < 3; ++k){
                if (bingo[j][k] == x){
                    bingo[j][k] = -1;
                }
            }
        }
    }
    //rows
    for (int i = 0; i < 3; ++i){
        int count = 0;
        for (int j = 0; j < 3; ++j){
            if (bingo[i][j] == -1){
                count++;
            }
        }
        if (count == 3){
            cout << "Yes\n";
            return;
        }
    }

    //cols
    for (int j = 0; j < 3; ++j){
        int count = 0;
        for (int i = 0; i < 3; ++i){
            if (bingo[i][j] == -1){
                count++;
            }
        }

        if (count == 3){
            cout << "Yes\n";
            return;
        }
    }

    // diagonals
    int count = 0;
    for (int i = 0; i < 3; ++i){
        if (bingo[i][i] == -1){
            count++;
        }
    }

    if (count == 3){
        cout << "Yes\n";
        return;
    }

    count = 0;

    if (bingo[0][2] == bingo[1][1] and bingo[1][1] == bingo[2][0] and bingo[2][0] == -1){
        cout << "Yes\n";
        return;
    }

    cout << "No\n";
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