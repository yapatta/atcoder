#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<int> a(3),b(3);
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];

// a to b

	//dp[i] : どんぐりi個で持つ価値の最大
	vector<ll> dp(100000000,0);
	for(int i=0;i<=n;i++)
		dp[i]=i;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i>=a[j])dp[i]=max(dp[i],dp[i-a[j]]+b[j]);
		}
	}


	int atob=dp[n];

// b to a

	//初期化
	for(int i=0;i<=atob;i++)
		dp[i]=i;

	for(int i=1;i<=atob;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i>=b[j])dp[i]=max(dp[i],dp[i-b[j]]+a[j]);
		}
	}

	cout << dp[atob] << endl;
}
