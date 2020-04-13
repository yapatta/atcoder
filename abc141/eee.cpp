#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ABC141Eをローリングハッシュで解く
// 高速版

struct RollingHash {
	static const int base1 = 1007, base2 = 2009;
	static const int mod1 = 1000000007, mod2 = 1000000009;
	vector<ll> hash1, hash2, power1, power2;

	RollingHash(const string &S) {
		int n = (int)S.size();
		hash1.assign(n+1, 0);
		hash2.assign(n+1, 0);
		power1.assign(n+1, 1);
		power2.assign(n+1, 1);
		for(int i=0;i<n;i++) {
			hash1[i+1] = (hash1[i] * base1 + S[i]) % mod1;
			hash2[i+1] = (hash2[i] * base2 + S[i]) % mod2;
			power1[i+1] = (power1[i] * base1) % mod1;
			power2[i+1] = (power2[i] * base2) % mod2;
		}
	}

	// get hash of S[left: right) (0から見る)
	inline pair<ll,ll> get(int l, int r) const {
		ll res1 = hash1[r] - hash1[l] * power1[r-l] % mod1;
		if(res1 < 0) res1 += mod1;
		ll res2 = hash2[r] - hash2[l] * power2[r-l] % mod2;
		if(res2 < 0) res2 += mod2;
		return {res1, res2};
	}

	// S[a:]とS[b:]のLCP(最長共通接頭辞)を求める
	inline int getLCP(int a, int b) const {
		int len = min((int)hash1.size() - a ,(int)hash1.size() - b);
		int low = 0, high = len;
		while(high - low > 1) {
			int mid = (high + low) >> 1;
			if(get(a, a + mid) == get(b, b + mid)) low = mid;
			else high = mid;
		}
		return low;
	}
};

signed main() {
	int N; string S;
	cin >> N >> S;
	RollingHash rh(S);

	// 二分探索判定
	auto check = [&](int d) -> bool {
		map<pair<ll,ll>,int> mp;
		for(int i=0;i+d<=N;i++) {
			auto p = rh.get(i, i+d);
			if(mp.count(p)) {
				if(i - mp[p] >= d) return true;
			}
			else mp[p] = i;
		}
		return false;
	};
	
	int left = 0, right = N / 2 + 1;
	while(right - left > 1) {
		int mid = (left + right) >> 1;
		if(check(mid)) left = mid;
		else right = mid;
	}
	cout << left << endl;
}
