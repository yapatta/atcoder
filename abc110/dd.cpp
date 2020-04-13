#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

vector<pair<ll,ll>> makePrimeFactors(ll rest) {
	vector<pair<ll,ll>> pf;

	for(ll n=2;n * n <= rest;n++) {
		ll cnt = 0;
		while(rest % n == 0) {
			rest /= n;
			cnt++;
		}
		if(cnt > 0) {
			pf.push_back({n, cnt});
		}
	}
	if(rest != 1) pf.push_back({rest, 1});

	return pf;
}

ll fact(ll n) {
	ll res = 1;
	for(ll i=1;i<=n;i++) {
		res *= i;
		res %= MOD;
		if(res==0) res = MOD;
	}
	return res;
}

//aのb乗
ll powMod(ll a, ll b) {
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

ll comb(ll a, ll b){
	if(a==b || b==0) return 1;
	return (((fact(a)*powMod(fact(b),MOD-2))%MOD)*powMod(fact(a-b),MOD-2))%MOD;
}


int main() {
	ll N, M;
	cin >> N >> M;
	// 素因数分解
	vector<pair<ll,ll>> pf;
	pf = makePrimeFactors(M);
	ll ans = 1;
	for(int i=0;i<pf.size();i++) {
		ll sum = pf[i].second;
		// sum個をN個に分ける
		// sum個とN-1個の仕切り
		// sum+N-1Csum
		ans *= comb(sum+N-1, sum);
		ans %= MOD;
	}
	cout << ans << endl;
}
