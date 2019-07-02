#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

signed
main(){
		ll N, M;
		cin >> N >> M;
		vector<bool> ok(N+2, true);
		for(int i=0;i<M;i++)
		{
				int a;
				cin >> a;
				ok[a] = false;
		}
		vector<ll> dp(N+2,0);
		dp[0] = 1;
		if(ok[1]==true) dp[1] = 1;
		else dp[1] = 0;
		
		for(int i=2;i<=N;i++)
		{
				if(ok[i]){
						if(ok[i-1] && ok[i-2]){
								dp[i] = dp[i-1] + dp[i-2];
						}else if(ok[i-1]){
								dp[i] = dp[i-1];
						}else if(ok[i-2]){
								dp[i] = dp[i-2];
						}else{
								dp[i] = 0;
						}
				}else{
						dp[i] = 0;
				}
				dp[i] %= MOD;
		}
		cout << dp[N] << endl;
}
