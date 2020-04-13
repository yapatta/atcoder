#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	ll ans = 0;
	for(int i=0;i<n;i++) {
		ll a,b;
		cin >> a >> b;
		ans += max(a,b);
	}
	cout << ans << endl;
}
