#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

//aのb乗
ll modpow(ll a, ll b) {
	ll res = 1;
	while(b > 0) {
		if(b & 1) res = res * a % MOD;
		if(res==0) res = MOD;
		a = a * a % MOD;
		if(a==0) a = MOD;
		b >>= 1;
	}
	return res;
}

signed main() {
	string S;
	cin >> S;
	int N = (int)S.size();
	ll ans = 0;
	// ABC AB? ?BC ?B? に分ける
	vector<ll>  a(N+1, 0), c(N+2, 0), l(N+1, 0), r(N+2, 0);
	for(int i=1;i<=N;i++) {
		if(S[i-1] == 'A') a[i]++;
		if(S[i-1] == '?') l[i]++;
	}
	for(int i=1;i<=N;i++) {
		a[i] += a[i-1];
		l[i] += l[i-1];
	}
	
	for(int i=N;i>=1;i--) {
		if(S[i-1] == 'C') c[i]++;
		if(S[i-1] == '?') r[i]++;
	}
	for(int i=N;i>=0;i--) {
		c[i] += c[i+1];
		r[i] += r[i+1];
	}

	for(int i=1;i<=N;i++) {
		if(S[i-1] == 'B' or S[i-1] == '?') {
			ll plus = 0;
			plus += (((modpow(3, l[i-1] + r[i+1]) * a[i-1]) % MOD) * c[i+1] % MOD);
			plus += (((modpow(3, l[i-1] + r[i+1] - 1) * a[i-1]) % MOD) * r[i+1] % MOD);
			plus += (((modpow(3, l[i-1] + r[i+1] - 1) * l[i-1]) % MOD) * c[i+1] % MOD);
			plus += (((modpow(3, l[i-1] + r[i+1] - 2) * l[i-1]) % MOD) * r[i+1] % MOD);
			ans += plus;
			ans %= MOD;
		}
	}
	cout << ans << endl;
}
