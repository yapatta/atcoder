#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX = 1000000000;

int main() {
	ll a, b, x;
	cin >> a >> b >> x;
	ll ans = 0;
	ll ten = 10;
	for(ll i=1;i<=9;i++) {
		// i桁の数で最大の起こりうる数
		ll key = (x - b * i) / a;
		if((ten/10) <= key and key < ten) {
			ans = max(ans, key);
		} else {
			if(ten-1 < key) {
				ans = max(ans, ten-1);
			}
		}
		ten *= 10;
	}
	if(a*MAX + b*10 <= x) {
		ans = max(ans, MAX);
	}
	cout << ans << endl;
}
