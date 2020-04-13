#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

ll my_pow(ll a, ll b) {
	if(b == 0) return 1;
	return a*my_pow(a,b-1) % MOD;
}

int main(){
	int n;
	cin >> n;
	vector<ll> d(n);
	for(int i=0;i<n;i++) cin >> d[i];
	if(d[0] != 0) {
		cout << 0 << endl;
		return 0;
	}
	sort(d.begin(), d.end());
	if(d[1] != 1) {
		cout << 0 << endl;
		return 0;
	}
	vector<pair<ll,ll>> c;
	ll cnt = 1;
	for(int i=1;i<n;i++) {
		if(d[i-1]==d[i]) {
			cnt++;
		}else{
			c.push_back({cnt, d[i-1]});
			cnt = 1;
		}
	}
	c.push_back({cnt,d[n-1]});
	ll ans = 1;
	for(int i=1;i<c.size();i++) {
		//cout << c[i].first << " " << c[i].second << endl;
		if(i != c[i].second) {
			cout << 0 << endl;
			return 0;
		}
		ans *= my_pow(c[i-1].first,c[i].first);
		ans %= MOD;
	}
	cout << ans << endl;
}
