#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N;
	cin >> N;
	vector<ll> X(N);
	for(auto &x : X) cin >> x;
	ll ans = LLONG_MAX;
	for(ll i=0;i<=100;i++) {
		ll tmp = 0;
		for(ll j=0;j<N;j++) {
			tmp += (i-X[j])*(i-X[j]);
		}
		ans = min(ans, tmp);
	}
	cout << ans << endl;
}
