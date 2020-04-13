#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main(){
	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	vector<ll> la(n+5,0), ra(n+5,0);
	for(int i=1;i<=n;i++) {
		la[i] = la[i-1] + a[i-1];
		ra[i] = ra[i-1] + a[n-i];
	}
	sort(a.begin(),a.end());
	ll ans = 0;
	for(int i=0;i<n;i++) {
		ans += (n-1)*a[i];
		ans %= MOD;
	}
	/*
	for(int i=0;i<n-1;i++) {
		cout << ra[n-1-i] << endl;
		ans += (a[i] ^ ra[n-1-i]);
	}
	*/
	cout << ans << endl;
}
