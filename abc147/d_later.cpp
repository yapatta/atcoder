#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9+7;

int main() {
	int N;
	cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	vector<ll> one(62, 0), zero(62, 0);
	for(auto &a : A) {
		for(int i=0;i<62;i++) {
			if((a >> i) & 1) one[i]++;
			else zero[i]++;
		}
	}
	ll ans = 0;
	ll bit = 1;
	for(int i=0;i<62;i++) {
		ans += ((zero[i] * one[i]) % MOD) * bit;
		bit *= 2;
		bit %= MOD;
		ans %= MOD;
	}
	cout << ans << endl;
}
