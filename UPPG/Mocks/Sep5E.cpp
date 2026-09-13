// cj's soln
#include <bits/stdc++.h>
using namespace std;
#define MOD998 998244353
#define safemod(a, b) ((((a) % (b)) + (b)) % (b))
#define ll long long
 
vector<int> impl2(int n, vector<int> arr) {
   vector<int> A;
   vector<int> B;
   vector<vector<int>> segments; 
   // cout << format("{} {}\n", segments, arr);
   while (arr.size() > 0) {
      int v = *max_element(arr.begin(), arr.end());
      int m = arr.size();
      for (int i = 0; i < m; i++) {
         if (arr[i] == v) {
            int sufflen = m - i;
            int Arem = m - A.size();
            int Brem = m - B.size();
            vector<int> seg;
            for (int j = i; j < m; j++) seg.push_back(arr[j]);
            segments.push_back(seg);
            for (int j = i; j < m; j++) arr.pop_back();
            break;
         }
         // cout << format("{} {}\n", A, B);
      }
   }
   reverse(segments.begin(), segments.end());
   // cout << format("{} {}\n", segments, arr);
   int s = segments.size();
   vector<vector<bool>> dp(n+1, vector<bool>(s+1, false));
   vector<bool> ors(n+1, false);
   vector<bool> claim(n+1, false);
   ors[0] = true;
   dp[0][0] = true;
   vector<int> claims;
   for (int i = 0; i < s; i++) {
      int sl = segments[i].size();
      for (int l = sl; l < n+1; l++) {
         if (ors[l - sl] && !claim[l - sl]) {
            dp[l][i+1] = true;
            if (!ors[l]) {
               claim[l] = true;
               claims.push_back(l);
            }
            ors[l] = true;
         }
      }
      // for (auto row : dp) cout << format("{}\n", row);
      // cout << format("{} c\n", claim);
      for (auto v : claims) {
         claim[v] = false;
      }
      claims.clear();
      // cout << format("{} c\n", claim);
      // cout << format("{} o\n", ors);
      // cout << "\n";
   }
   // cout << flush;
   vector<int> inds;
   int curr = n;
   if (!ors[n]) return {-1};
   while (curr > 0) {
      for (int i = 0; i < s; i++) {
         if (dp[curr][i+1]) {
            inds.push_back(i);
            curr -= segments[i].size();
            break;
         }
      }
   }
   // cout << format("{}\n", inds);
   reverse(inds.begin(), inds.end());
   vector<bool> dest(s, false);
   for (auto v : inds) {
      dest[v] = true;
      A.insert(A.end(), segments[v].begin(), segments[v].end());
   }
   for (int i = 0; i < s; i++) {
      if (!dest[i]) B.insert(B.end(), segments[i].begin(), segments[i].end());
   }
   A.insert(A.end(), B.begin(), B.end());
   return A;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   vector<int> arr(2*n);
   for (int i = 0; i < 2*n; i++) cin >> arr[i];
   vector<int> ans = impl2(n, arr);

   if (ans[0] == -1) cout << "-1" << "\n";
   else {
      for (int i = 0; i < n; i++) cout << ans[i] << " ";
      cout << "\n";
      for (int i = 0; i < n; i++) cout << ans[n+i] << " ";
   }
}