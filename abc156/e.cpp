#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

ll mod(ll a) {
	return ((a%=MOD) > 0 ? a : a+MOD);
}

ll fact_[200005];

ll fact(ll n) {
	if(n == 0) fact_[0] = 1;
	if(n == 1) fact_[1] = 1;
	if(fact_[n] != 0) return fact_[n];
	return fact_[n] = (fact(n-1) * n) % MOD;
}
/*
ll fact(ll n) {
	ll res = 1;
	for(ll i=1;i<=n;i++) {
		res *= i;
		res %= MOD;
		if(res==0) res = MOD;
	}
	return res;
}
*/
//aのb乗
ll modPow(ll a, ll b) {
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
	return (((fact(a)*modPow(fact(b),MOD-2))%MOD)*modPow(fact(a-b),MOD-2))%MOD;
}

int main(){
	ll n, k;
	cin >> n >> k;
	ll ans = 0;
	for(ll i=0;i<min(n,k+1);i++) {
		// 0人となる部屋がi個である場合の数
		// 0人となる部屋の選び方 -> nCi
		// i人がn-iの部屋のどこかへ移動 -> {n-1}C{i}
		(ans += comb(n,i) * comb(n-1, i) % MOD) %= MOD;
	}
	cout << ans << endl;
}
