#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
ll mod(ll a) {
	return ((a%=MOD) > 0 ? a : a+MOD);
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
ll calc(ll a, ll b) {
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
	return (((fact(a)*calc(fact(b),MOD-2))%MOD)*calc(fact(a-b),MOD-2))%MOD;
}

int main(){
	ll n, a, b;
	cin >> n >> a >> b;
	ll ans;
	ll sum = calc(2, n) - 1;
	ll left = 1, right = 1;
	for(int k=1;k<=a;k++) {
		left *= (n-k+1);
		left %= MOD;
		left *= calc(k,MOD-2);
		left %= MOD;
	}
	for(int k=1;k<=b;k++) {
		right *= (n-k+1);
		right %= MOD;
		right *= calc(k,MOD-2);
		right %= MOD;
	}
	ans = sum - left - right;
	while(ans < 0) ans += MOD;
	cout << ans << endl;
}
