#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll a, b, x;
	ll ans = 0;
	cin >> a >> b >> x;
	ll ten = 10;
	for(ll keta=1;keta<=9;keta++) {
		ll n = (x - b*keta) / a;
		//cout << n << " " << keta << " " << n*a+b*keta << " " << ten << endl;
		if(n < ten && ten/10<=n) {
			ans = max(ans,n);
		}else{
			ll tmp = ten - 1;
			if(tmp <= n) {
				ans = max(ans, tmp);
			}
		}
		ten *= 10;
	}
	ll n = 1000000000;
	ll keta = 10;
	if(a*n+b*keta <= x) {
		ans = max(ans,n);
	}
	cout << ans << endl;
}
