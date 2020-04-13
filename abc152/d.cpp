#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
	ll n;
	cin >> n;
	ll ans = 0;
	if(n < 10) {
		ans = n;
	} else {
		// 一番上の桁数と, 一番上の桁の値
		ll keta = 0;
		ll tmp = n;
		while(tmp > 0) {
			tmp /= 10;
			keta++;
		}
		ll m = n / pow(10, keta-1);
		ans += 9;
		ans += (m-1)*(m-1)*(pow(10, keta-2)*pow(10,keta-2));
		ans += ( (n-(m*pow(10,keta-1)+m) > 0) ? ((n-m*pow(10,keta-1))/10): 0);

		ans += 9*9*( ( (pow(10,keta-2)-1) /9)*( (pow(10,keta-2)-1) /9) );

		ans += 2*(m-1)*pow(10,keta-2);
		ans += 2 * ( (n-(m*pow(10,keta-1)+m) > 0) ? ((n-m*pow(10,keta-1))/10): 0);

		ans += 2*9*((pow(10,keta-2)-1)/9);
	}
	cout << ans << endl;
}
