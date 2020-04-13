#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<ll> imos(n+1,0);
	ll sum = 0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
		imos[i+1] = a[i] + imos[i];
	}

	ll ans = LLONG_MAX;
	for(int i=0;i<=n;i++) {
		ll right = sum - imos[i];
		ll left = imos[i];
		ans = min(ans, llabs(left-right));
	}
	cout << ans << endl;
}
