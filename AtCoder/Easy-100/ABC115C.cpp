// written by josh.patinof
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

template <typename T> class SegmentTree {
    private:
        vector<T> tree;
        vector<T> arr;
        int n;

        int left(int node) {
            return 2 * node + 1;
        }
        
        int right(int node){
            return 2 * node + 2;
        }

        int mid(int l, int r){
            return l + (r - l) / 2;
        }

        void build(int node, int start, int end){
            if (start == end){
                tree[node] = arr[start];
                return;
            }

            int m = mid(start, end);
            build(left(node), start, m);
            build(right(node), m + 1, end);

            tree[node] = min(tree[left(node)], tree[right(node)]);
        }

        void update(int node, int start, int end, int idx, T val){
            if (start == end){
                arr[idx] = val;
                tree[node] = val;
                return;
            }
            int m = mid(start, end);
            if (idx <= m){
                update(left(node), start, m, idx, val);
            } else {
                update(right(node), m + 1, end, idx, val);
            }

            tree[node] = min(tree[left(node)], tree[right(node)]);
        }

        T query(int node, int start, int end, int l, int r){
            if (r < start or end < l){
                return INT_MAX;
            }
            if (l <= start and end <= r){
                return tree[node];
            }
            int m = mid(start, end);
            T left_min = query(left(node), start, m, l, r);
            T right_min = query(right(node), m + 1, end, l, r);
            return min(left_min, right_min);
        }
    public:
        SegmentTree(const vector<T>& a)
            : arr(a)
            , n(a.size())
        {
            tree.resize(4 * n);
            build(0, 0, n - 1);
        }

        void update(int idx, T val){

            update(0, 0, n - 1, idx, val);
        }

        T query(int l, int r){
            return query(0, 0, n - 1, l, r);
        }
};

void solve() {
    int n, k; cin >> n >> k;
    vector<int> h(n);
    vector<int> negated_h(n);
    for (int i = 0; i < n; ++i){
        cin >> h[i];
    }
    
    sort(h.begin(), h.end());
    for (int i = 0; i < n; ++i){
        negated_h[i] = -h[i];
    }
    SegmentTree<int> st(h);
    SegmentTree<int> neg_st(negated_h);
    int min_diff = INT_MAX;
    int l = 0;
    for (int r = k - 1; r < n; ++r){
        int h_min = st.query(l, r);
        int h_max = -neg_st.query(l, r);
        min_diff = min(min_diff, abs(h_max - h_min));
        l++;
    }

    cout << min_diff << endl;
    
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