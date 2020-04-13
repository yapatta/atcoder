#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll H;
	cin >> H;
	ll ans = 0;
	ll rest = H;
	ll cnt = 1;
	while(rest > 0) {
		ans += cnt;
		rest /= 2;
		cnt *= 2;
	}
	cout << ans << endl;
}
