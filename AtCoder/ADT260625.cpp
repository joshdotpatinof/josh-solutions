// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void print(vector<int> &a){
    // print
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;
}

void combination_util(int idx, int r, vector<int> &data, vector<vector<int>> &res, vector<int> &arr){
    int n = arr.size();
    if (data.size() == r){
        res.push_back(data);
        return;
    }

    if (data.size() == r){
        res.push_back(data);
        return;
    }

    for (int i = idx; i < n; ++i){
        data.push_back(arr[i]);
        combination_util(i + 1, r, data, res, arr);
        data.pop_back();
    }
}

vector<vector<int>> find_combs(vector<int> &arr, int r) {
    int n = arr.size();
    vector<vector<int>> res;
    vector<int> data;
    combination_util(0, r, data, res, arr);
    return res;
}

void solve() {
    int r, n; cin >> r >> n;
    vector<int> a(n, 1);
    for (int i = 0; i < n; ++i){
        a[i] += i;
    }
    vector<vector<int>> combs = find_combs(a, r);

    sort(combs.begin(), combs.end());

    for (auto c : combs){
        print(c);
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