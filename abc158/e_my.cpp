#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll powMod(ll a, ll b, ll mod) {
	ll res = 1;
	while(b > 0) {
		if(b & 1) res = res * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return res;
}
int main() {
	ll N, P;
	string S;
	cin >> N >> P >> S;
	ll ans = 0;
	if(P == 2 or P == 5) {
		// 末尾がPで割り切れる場合無条件にPの倍数
		// 理由: それ以外は, a * 10の形で表され, これはPで割り切れるから
		for(int i=0;i<N;i++) {
			int tmp = S[i] - '0';
			if(tmp % P == 0) {
				ans += (i+1);
			}
		}
		cout << ans << endl;
		return 0;
	}
	map<int,ll> mp;
	vector<ll> imos(N+1, 0);
	for(int i=N-1;i>=0;i--) {
		int tmp = S[i] - '0';
		imos[i] = tmp % P;
	}
	for(int i=N-2;i>=0;i--) {
		imos[i] = (imos[i] * powMod(10, N-i-1, P) + imos[i+1]) % P;
	}
	for(int i=0;i<=N;i++) mp[imos[i]]++;
	for(auto &now : mp) {
		ans += (now.second) * (now.second -1) / 2;
	}
	cout << ans << endl;
}
