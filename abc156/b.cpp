#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n, k;
	cin >> n >> k;
	ll ans = 0;
	while(1) {
		if(n == 0) break;
		n /= k;
		ans++;
	}
	cout << ans << endl;
}
