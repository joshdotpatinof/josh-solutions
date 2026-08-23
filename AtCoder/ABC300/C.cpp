// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isCenter(const int h, const int w, int i, int j, vector<vector<char>> &c){
    // assumed point itself is '#' already
    
    // check top left
    if (i - 1 >= 0 and j - 1 >= 0 and c[i-1][j-1] == '#'){
        //safe
    } else {
        return false;
    }
    // check top right
    if (i - 1 >= 0 and j + 1 < w and c[i-1][j+1] == '#'){
        //safe
    } else {
        return false;
    }
    // check bottom left
    if (i + 1 < h and j - 1 >= 0 and c[i+1][j-1] == '#'){
        //safe
    } else {
        return false;
    }
    // check bottom right
    if (i + 1 < h and j + 1 < w and c[i+1][j+1] == '#'){
        //safe
    } else {
        return false;
    }
    return true;
}

void solve() {
    int h, w; cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            cin >> c[i][j];
        }
    }    
    vector<int> ans(min(h, w), 0);
    vector<pair<int, int>> centers;
    for (int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j){
            if (c[i][j] == '#'){
                if (isCenter(h, w, i, j, c)){
                    pair<int, int> x = {i, j};
                    centers.push_back(x);
                }
            }
        }
    }

    for (auto [i, j] : centers){
        // find size of crosses
        // start
        int u = i;
        int v = j;

        // One Diagonal
        int top_left = 0;
        int bottom_right = 0;
        
        // top left leg
        while (u - 1 >= 0 and v - 1 >= 0 and c[u-1][v-1] == '#'){
            top_left++;
            u--;
            v--;
        }
        u = i;
        v = j;
        // bottom right leg
        while (u + 1 < h and v + 1 < w and c[u+1][v+1] == '#'){
            bottom_right++;
            u++;
            v++;
        }

        int diag_one = min(top_left, bottom_right);
        
        // Other Diagonal
        int top_right = 0;
        int bottom_left = 0;

        u = i;
        v = j;
        // top right leg
        while (u - 1 >= 0 and v + 1 < w and c[u-1][v+1] == '#'){
            top_right++;
            u--;
            v++;
        }
        u = i;
        v = j;
        // bottom left leg
        while (u + 1 < h and v - 1 >= 0 and c[u+1][v-1] == '#'){
            bottom_left++;
            u++;
            v--;
        }
        int diag_two = min(top_right, bottom_left);
        int sz = min(diag_one, diag_two);
        ans[sz-1]++;
    }

    // Ans
    for (auto x: ans){
        cout << x << " ";
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