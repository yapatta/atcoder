#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	ll N;
	cin >> N;
	vector<ll> d(N);
	for(int i=0;i<N;i++) cin >> d[i];
	sort(d.begin(), d.end());

	ll ans = d[N/2] - d[N/2-1];
	cout << ans << endl;
}

