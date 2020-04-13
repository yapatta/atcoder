#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
string s;

int main() {
	cin >> s;
	ll n = s.size();
	ll ten = 1;
	vector<vector<ll> > dp(n+1,vector<ll>(13,0));
	dp[n][0] = 1;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i] == '?')
		{
			for(int j=0;j<=9;j++)
			{
				for(int k=0;k<13;k++)
				{
					dp[i][(k+j*ten)%13] += dp[i+1][k];
					dp[i][(k+j*ten)%13] %= MOD;
				}
			}
		}else
		{
			ll tmp = s[i] - '0';
			for(int k=0;k<13;k++)
			{
				dp[i][(k+tmp*ten)%13] += dp[i+1][k];
				dp[i][(k+tmp*ten)%13] %= MOD;
			}
		}
		ten *= 10;
		ten %= 13;
	}
	cout << dp[0][5] << endl;
}
