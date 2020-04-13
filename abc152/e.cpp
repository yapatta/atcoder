#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9+7;

ll gcd(ll a, ll b) {
	if(b == 0) return a;
	if(b > a) return gcd(b,a);
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a,b);
}

int main(){
	int N;
	cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	ll l = A[0];
	for(int i=1;i<N;i++) {
		l = lcm(l, A[i]);
	}
	ll ans = 0;
	for(int i=0;i<N;i++) {
		ans += l/A[i];
		ans %= MOD;
	}
	cout << ans << endl;
}
