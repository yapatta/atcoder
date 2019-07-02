#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main() {
		ll x;
		cin >> x;
		ll ans = 2 * (x / (5+6));
		ll remain = x % (5+6);
		if(1<= remain && remain <= 6) ans++;
		else if(6 < remain) ans += 2;

		cout << ans << endl;
}
