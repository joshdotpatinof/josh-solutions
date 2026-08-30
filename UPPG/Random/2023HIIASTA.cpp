#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll BAD = -1;

vector<ll> encodeBasek(ll n, ll k){
    vector<ll> nums;
    while (n != 0){
        nums.push_back(n % k);
        n /= k;
    }
    // little endian order
    return nums;
}

ll convertBaseTen(vector<ll> trits){
    ll ans = 0;
    for (auto x : trits){
        ans *= 3;
        ans += x;
    }
    return ans;
}


ll add(ll a, ll b){
	// can only add if any digit occurs only <= 2 times (0, 1, 2)
	if (a == 0 or b == 0){ // 
		return 0; // both 0
	}

	if (a == BAD or b == BAD){ // both aren't usable
		return BAD;
	}

	ll v = add(a / 3, b / 3); // moving to the next 'trit'
	ll w = (a % 3 + b % 3); // "number used of that trit" (0, 1, 2)
	if (v == BAD or w >= 3){
		return BAD;
	}
	return v * 3 + w; 
}

ll solve(){
	int n; cin >> n;
	vector<ll> a(n);
	for (auto &x : a){
		cin >> x;
	}

	vector<ll> p3(11, 1); // 3^k, 0 <= k <= 10
	for (int i = 1; i <= 10; ++i){
		p3[i] *= (3 * p3[i-1]);
	}
    
	ll ans = -1;

	vector<vector<ll>> dp(n + 1, vector<ll>(p3[10], 0)); 
	// dp[i][j] = max_weight that Yaman can lift up to weight i with digits j used(?)	

	for (int i = 0; i < n; ++i){
        vector<ll> tritsAI = encodeBasek(a[i], 3);
        reverse(tritsAI.begin(), tritsAI.end());
		ll AIMask = convertBaseTen(tritsAI);
        for (int j = 0; j < p3[10]; ++j){
			dp[i + 1][j] = dp[i][j]; // prev
			
			ll ij = add(AIMask, j); // add(dig_mask of a[i], j (mask))

			if (ij != -1){ 
				dp[i + 1][j] = max(dp[i + 1][j], a[i] + dp[i][ij]);
			}
		}
	}
	
	ans = dp[n][0];
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--){
		cout << solve() << endl;
	}
}

// 3
// 3
// 11 23 2
// 1
// 222
// 3
// 97 98 99