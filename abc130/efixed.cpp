#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll MOD = 1e9+7;

int main(){
		int N,M;
		cin >> N >> M;
		vector<ll> s(N),t(M);
		for(int i=0;i<N;i++)
				cin >> s[i];
		for(int i=0;i<M;i++)
				cin >> t[i];

		vector<vector<ll> > dp(N+1,vector<ll>(M+1, 0));

		for(int i=1;i<=N;i++){
				for(int j=1;j<=M;j++){
						if(s[i-1]==t[j-1]){
								for(int k=1;k<=i-1;k++){
										for(int l=1;l<=j-1;l++){
												dp[i][j] += dp[k][l];
										}
								}
								//自分自身
								dp[i][j] += 1;
						}else{
								dp[i][j] = 0;
						}
						dp[i][j] %= MOD;
				}
				cout << endl;
		}
		ll ans = 0;
		for(int i=1;i<=N;i++){
				for(int j=1;j<=M;j++){
						ans += dp[i][j];
						ans %= MOD;
				}
		}
		cout << ans + 1 << endl;
}

