// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int h, w; cin >> h >> w;
    vector<vector<char>> img(h, vector<char>(w));
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            cin >> img[i][j];
        }
    }
    // top
    for (int j = 0; j < w + 2; ++j){
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < h; ++i){
        cout << "#";
        for (int j = 0; j < w; ++j){
            cout << img[i][j];
        }
        cout << "#\n";
    }
    // bot
    for (int j = 0; j < w + 2; ++j){
        cout << "#";
    }
    cout << endl;
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