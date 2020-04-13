#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9+7;

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

bool isPrime[1000005];
vector<ll> primes;

void eratos(ll maxi) {
	isPrime[1] = false;
	for(ll i=2;i<=maxi;i++) isPrime[i] = true;
	for(ll i=2;i<=maxi;i++) {
		if(isPrime[i]) {
			for(ll j=2*i;j<=maxi;j+=i) {
				isPrime[j] = false;
			}
		}
	}
	for(ll i=2;i<=maxi;i++)
		if(isPrime[i])
			primes.push_back(i);
}

signed main(){
	ll N;
	cin >> N;
	vector<ll> A(N);
	ll maxa = 0;
	for(auto &a : A) {
		cin >> a;
		maxa = max(a, maxa);
	}
	eratos(maxa);
	vector<ll> lcm_prime((ll)primes.size(), 0);
	for(ll i=0;i<N;i++) {
		if(A[i] == 1) continue;
		ll tmp = A[i];
		ll key = 0;
		while(tmp > 1 && primes[key] * primes[key] <= A[i]) {
			ll cnt = 0;
			while(tmp%primes[key] == 0) {
				tmp /= primes[key];
				cnt++;
			}
			lcm_prime[key] = max(lcm_prime[key], cnt);
			key++;
		}
		if(tmp == A[i]) {
			auto itr = lower_bound(primes.begin(), primes.end(),A[i]);
			lcm_prime[itr-primes.begin()] = max(1LL, lcm_prime[itr-primes.begin()]);
		}
	}

	ll ans = 0;

	ll l = 1LL;
	for(ll i=0;i<primes.size();i++) {
		l *= modPow(primes[i],lcm_prime[i]);
		l %= MOD;
	}

	for(ll i=0;i<N;i++) {
		ans += (l * modPow(A[i], MOD-2)) % MOD;
		ans %= MOD;
	}
	cout << ans << endl;
}
