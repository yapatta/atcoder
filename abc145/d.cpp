#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD=1e9+7;
const ll MAX_N = 1e6+5;

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

ll combination(ll n, ll k) {
	return ((fact(n) * calc(k,MOD-2))%MOD * calc(n-k, MOD-2))%MOD;
}

ll x, y;

int main(){
	cin >> x >> y;
	if( !((2*x-y)%3== 0 && (2*y-x)%3 == 0) ) {
		cout << 0 << endl;
		return 0;
	}
	ll a = (2*x-y)/3;
	ll b = (2*y-x)/3;
	if(a < 0 || b < 0) {
		cout << 0 << endl;
		return 0;
	}
	cout << combination(a+b,b) << endl;
}
