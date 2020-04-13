#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;


struct RollingHash {
	static const int base1 = 1007, base2 = 2009;
	static const int mod1 = 1e9+7, mod2 = 1e9+9;
	vector<ll> hash1,hash2, power1, power2;

	RollingHash(const string &S) {
		int n = (int)S.size();
		hash1.assign(n+1,0);
		hash2.assign(n+1,0);
		power1.assign(n+1,1);
		power2.assign(n+1,1);

		for(int i=0;i<n;i++) {
			hash1[i+1] = (hash1[i] * base1 + S[i]) %mod1;
			hash2[i+1] = (hash2[i] * base2 + S[i]) %mod2;
			power1[i+1] = (power1[i] * base1) % mod1;
			power2[i+1] = (power2[i] * base2) % mod2;
		}
	}

	// ハッシュ値を2つ求めることで、正しさを担保
	// s[left: right]のハッシュ値を取得 [left:right)
	inline pair<ll,ll> get(int l, int r) const {
		ll res1 = hash1[r] - hash1[l] * power1[r-l] % mod1;
		if(res1 < 0 ) res1 += mod1;
		ll res2 = hash2[r] - hash2[l] * power2[r-l] % mod2;
		if(res2 < 0 ) res2 += mod2;
		return {res1, res2};
	}
	
	// S[a:]とS[b:]のLCP(最長共通接頭辞)を求める
	inline int getLCP(int a, int b) const {
		int len = min((int)hash1.size()-a, (int)hash1.size()-b);
		int low = 0, high = len;
		
		// 二分探索
		while(high-low > 1) {
			// 2で割るだけ
			int mid = (low+high) >> 1;
			if(get(a,a+mid) != get(b,b+mid) ) high = mid;
			else low = mid;
		}
		return low;
	}
};

int main() {
	int n;
	string s;
	cin >> n >> s;

	RollingHash rh(s);

	int res = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			int lcp = rh.getLCP(i,j);
			lcp = min(lcp, j-i);
			res = max(res, lcp);
		}
	}
	cout << res << endl;
}
