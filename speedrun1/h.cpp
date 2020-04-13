#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e10;

int main() {
	int N;
	cin >> N;
	vector<ll> a(N), dp(N,INF);
	for(int i=0;i<N;i++)
		cin >> a[i];

	for(int i=0;i<N;i++)
	{
		*lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
	}
	ll ans = N;
	for(int i=0;i<N;i++)
		if(dp[i] == INF)
		{
			ans = i;
			break;
		}

	cout << ans << endl;
}
