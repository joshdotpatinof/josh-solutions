// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s, t; cin >> s >> t;
    // what matters is order of characters
    int n = s.size();
    char c = t[0];

    // find possible starts
    vector<int> indices;
    for (int i = 0; i < n; ++i){
        if (s[i] == c){
            indices.push_back(i);
        }
    }

    if (indices.size() <= 0){
        cout << "No\n";
        return;
    }

    for (auto st : indices){
        // go up to end
        bool is_rotation = true;
        int j = 0;
        for (int i = st; i < n; ++i){
            if (s[i] != t[j]){
                is_rotation = false;
                break;
            }
            j++;
        }

        if (!is_rotation){
            continue;
        }

        if (st > 0 and j < n){
            // continuation (other half if needed)
            for (int i = 0; i < st; ++i){
                if (s[i] != t[j]){
                    is_rotation = false;
                    break;
                }
                j++;
            }
        }

        if (!is_rotation){
            continue;
        }

        if (is_rotation){
            cout << "Yes\n";
            return;
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