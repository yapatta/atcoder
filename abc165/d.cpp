#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

ll A, B, N;

ll f(ll x) {
	return (A*x) / B - A * (x / B);
}

int main(){
	cin >> A >> B >> N;
	ll ans;
	if(B - 1 <= N) {
		ans = f(B - 1);
	} else {
		ans = f(N);
	}
	cout << ans << endl;
}
