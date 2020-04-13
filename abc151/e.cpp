#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll mod(ll &a) {
	return ((a%=MOD) > 0 ? a : a+MOD);
}

const int MAXN = 1e5+10;
ll fact_[MAXN] = {0};

ll fact(ll n) {
	if(n == 1) return fact_[n] = 1;
	if(fact_[n] != 0) return fact_[n];
	return fact_[n] = (n * fact(n-1)) % MOD;
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

int main(){
	int N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	sort(A.begin(), A.end());
	ll ans = 0;
	for(ll n=0;n<=N-K;n++) {
		ll plus =  ((A[N-1-n] - A[n]) * comb(N-1-n,K-1)) % MOD;
		if(plus < 0) plus += MOD;
		ans += plus;
		ans %= MOD;
	}
	cout << ans << endl;
}
