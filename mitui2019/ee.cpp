#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main() {
	ll n;
	cin >> n;
	bool is_one = true;
	vector<ll> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(i != a[i]) {
			is_one = false;
		}
	}
	if(is_one) {
		cout << 3 << endl;
		return 0;
	}

	vector<ll> num(3,0);
	ll ans = 1;
	for(int i=0;i<n;i++) {
		ll same_num = 0;
		for(int j=0;j<3;j++) {
			if(a[i] == num[j]) {
				same_num++;
			}
		}
		ans *= same_num;
		ans %= MOD;
		for(int j=0;j<3;j++) {
			if(a[i] == num[j]) {
				num[j]++;
				break;
			}
		}
	}
	cout << ans << endl;
}
