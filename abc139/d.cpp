#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N;
	cin >> N;
	ll ans = 0;
	for(ll i=0;i<N;i++)
		ans += i;

	cout << ans << endl;
}
