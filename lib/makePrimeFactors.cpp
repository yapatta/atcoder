#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 素因数分解するプログラミング

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

int main() {

}
