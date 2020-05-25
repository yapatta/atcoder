#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()
const ll MOD = 1e9+7;

/*
 * 方針
 * 1 <= X <= Kについて, 最大公約数がXとなるgcd(A1,...,AN) = Xの組を求める
 * このとき, A1,..,ANが皆Xの倍数になればいいが, aXの倍数(a >= 2)にはなってはいけない
 */

ll mod(ll a) {
	return ((a %= MOD) >= 0) ? a : a + MOD;
}

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


int main(){
	ll N, K;
	cin >> N >> K;
	vector<ll> count(K+1, 0);

	ll ans = 0;
	for(int i=K;i>=1;i--) {
		count[i] = modPow(K / i, N);
		for(int j=2*i;j<=K;j+=i) {
			count[i] = mod(count[i] - count[j]);
		}
		ans = mod(ans + i * count[i]);
	}
	cout << ans << endl;
}
