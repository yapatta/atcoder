#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll L, R;
	cin >> L >> R;
	for(ll key=0;2019*key+1<=R;key++) {
		if(L <= 2019*key and 2019*key+1 <= R) {
			cout << 0 << endl;
			return 0;
		}
	}

	ll ans = ((L*R)%2019);
	for(ll x=L;x<=R;x++) {
		for(ll y=x+1;y<=R;y++) {
			if(ans > ((x*y)%2019))
				ans = ((x*y)%2019);
		}
	}
	cout << ans << endl;
}
