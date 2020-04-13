#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N;
	cin >> N;
	vector<ll> a(N);
	ll sum = 0;
	for(int i=0;i<N;i++) {
		cin >> a[i];
		sum += a[i];
	}
	vector<ll> ans(N,0);
	ans[0] = sum;
	for(int i=1;i<N;i+=2)
	{
		ans[0] -= 2*a[i];
	}
	for(int i=0;i<N;i++) {
		ans[(i+1)%(N)] = 2*a[i] - ans[i];
	}

	for(int i=0;i<N;i++)
	{
		if(i!=0) cout << " " << ans[i];
		else cout << ans[i];
	}
	cout << endl;
}
