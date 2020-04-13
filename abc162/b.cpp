#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<ll,ll>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll N; cin >> N;
	ll ans =0;
	for(ll n=1;n<=N;n++) {
		if(n % 3 == 0 or n % 5 == 0) {

		} else {
			ans += n;
		}
	}
	cout << ans << endl;
}
