// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int ha, wa; cin >> ha >> wa;
    vector<string> a(ha);
    for (auto &x : a){
        cin >> x;
    }
    int hb, wb; cin >> hb >> wb;
    vector<string> b(hb);
    for (auto &x : b){
        cin >> x;
    }
    int hx, wx; cin >> hx >> wx;
    vector<string> x(hx);
    for (auto &y : x){
        cin >> y;
    }

    for (int ra = 0; ra <= 20; ++ra){
        for (int ca = 0; ca <= 20; ++ca){
            for (int rb = 0; rb <= 20; ++rb){
                for (int cb = 0; cb <= 20; ++cb){
                    vector<vector<char>> canvas(30, vector<char>(30, '.'));
                    
                    for (int i = 0; i < ha; ++i) {
                        for (int j = 0; j < wa; ++j) {
                            if (a[i][j] == '#') {
                                canvas[ra + i][ca + j] = '#';
                            }
                        }
                    }

                    for (int i = 0; i < hb; ++i) {
                        for (int j = 0; j < wb; ++j) {
                            if (b[i][j] == '#') {
                                canvas[rb + i][cb + j] = '#';
                            }
                        }
                    }

                    bool match = true;
                    for (int r = 0; r < 30; ++r) {
                        for (int c = 0; c < 30; ++c) {
                            bool is_black_in_canvas = (canvas[r][c] == '#');
                                
                            bool is_inside_X = (10 <= r && r < 10 + hx && 10 <= c && c < 10 + wx);
                            bool is_black_in_X = is_inside_X && (x[r - 10][c - 10] == '#');

                            if (is_black_in_canvas != is_black_in_X) {
                                match = false;
                                break;
                            }
                        }
                        if (!match) break;
                    }
                    if (match) {
                        cout << "Yes\n";
                        return;
                    }
                }
            }
        }
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
