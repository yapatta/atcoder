#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9+7;

int digit(ll x)
{
	int res = 0;
	while(x > 0)
	{
		res++;
		x /= 10;
	}
	return res;
}
int main() {
	ll n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	ll ans = a[0];
	for(int i=1;i<n;i++)
	{
		int keta = digit(a[i]);
		for(int j=0;j<keta;j++)
			ans *= 10;
		
		ans += a[i];
		ans %= MOD;
	}
	cout << ans << endl;
}
