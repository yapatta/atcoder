#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	vector<ll> a(n+1), b(n);
	for(int i=0;i<n+1;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
	
	ll ans = 0;
	for(int i=0;i<n;i++)
	{
		if(b[i] > a[i])
		{
			ans += a[i];
			b[i] = b[i] - a[i];
			a[i] = 0;
		}else{
			ans += b[i];
			a[i] = a[i] - b[i];
			b[i] = 0;
		}

		if(b[i] > a[i+1])
		{
			ans += a[i+1];
			b[i] = b[i] - a[i+1];
			a[i+1] = 0;
		}else{
			ans += b[i];
			a[i+1] = a[i+1] - b[i];
			b[i] = 0;
		}
	}
	cout << ans << endl;
}
