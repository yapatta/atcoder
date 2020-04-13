#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll key = 1e9;
int main() {
	ll s;
	cin >> s;
	vector<ll> x(3), y(3);
	x[0] = 0, y[0] = 0;
	if(s >= 1e18) {
		x[1] = 1e9, y[1] = 0;
		x[2] = 0, y[2] = 1e9;
	}else {
		ll a = s / key, b = s%key;
		a++;
		b -= key;
		x[1] = key, y[1] = 1;
		x[2] = -b, y[2] = a;
	}
	for(int i=0;i<3;i++) {
		cout << x[i] << " " << y[i] << ((i==2)?"\n":" ");
	}
}
