#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1e9+7;
int binary(int bina){
	int ans = 0;
	for (int i = 0; bina>0 ; i++)
	{
		ans = ans+(bina%2)*pow(10,i);
		bina = bina/2;
	}
	return ans;
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int> > dp(m+5, vector<int>((1<<n)+5, MAX));
	for(int i=0;i<=m;i++)
		dp[i][0] = 0;

	for(int i=1;i<=m;i++) {
		int a,b;
		cin >> a >> b;
		int bit = 0;
		for(int j=0;j<b;j++) {
			int c;
			cin >> c;
			c--;
			bit |= (1<<c);
		}
		for(int j=0;j<(1<<n);j++) {
			dp[i][j] = dp[i-1][j];
		}
		for(int j=0;j<(1<<n);j++) {
			dp[i][bit|j] = min(dp[i-1][j] + a, dp[i][bit|j]);
		}
	}

	if(dp[m][(1<<n)-1]==MAX) cout << -1 << endl;
	else cout << dp[m][(1<<n)-1] << endl;
}
