#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

signed
main(){
		string L;
		cin >> L;
		ll len = L.size();

		//j=0: その時点でL以下が確定
		//j=1: その時点でL以下かわからない
		vector<vector<ll> > dp(len+2, vector<ll>(2, 0));
		dp[1][0] = 1;
		dp[1][1] = 2;

		for(ll i=1;i<len;i++)
		{
				if(L[i]=='1')
				{
						dp[i+1][0] = dp[i][0]*3 + dp[i][1];
						dp[i+1][1] = dp[i][1]*2;
				}else
				{
						dp[i+1][0] = dp[i][0]*3;
						dp[i+1][1] = dp[i][1];
				}
				dp[i+1][1] %= MOD;
				dp[i+1][0] %= MOD;
		}
		cout << (dp[len][0]+dp[len][1])%MOD << endl;
}
