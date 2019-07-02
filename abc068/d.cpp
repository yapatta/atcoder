#include <bits/stdc++.h>
using ll = long long;
using namespace std;

signed
main(){
	ll N;
	cin >> N;
	vector<ll> a(N);
	for(int i=0;i<N;i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	ll cnt = 0;
	ll before = a[0];

	for(int i=1;i<N;i++)
	{
		if(before == a[i])
			cnt++;

		before = a[i];
	}
	if(cnt % 2 == 0) cout << N - cnt << endl;
	else cout << N - cnt - 1 << endl;
}
