#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int NO = 11;

int main(){
	int n;
	string s;
	cin >> n >> s;
	ll dp[12][12][12];
	for(int i=0;i<=11;i++) {
		for(int j=0;j<=11;j++) {
			for(int k=0;k<=11;k++) {
				dp[i][j][k] = 0;
			}
		}
	}
	dp[NO][NO][NO] = 1;
	for(int i=0;i<s.size();i++) {
		int key = (int)(s[i]-'0');
		for(int one=0;one<10;one++) {
			for(int two=0;two<10;two++) {
				if(dp[one][two][key] > 0) continue;
				else dp[one][two][key] += dp[one][two][NO];
			}
			if(dp[one][key][NO] > 0) continue;
			else dp[one][key][NO] += dp[one][NO][NO];
		}
		if(dp[key][NO][NO] > 0) continue;
		else dp[key][NO][NO] += dp[NO][NO][NO];
	}
	ll ans = 0;
	for(int i=0;i<=9;i++) {
		for(int j=0;j<=9;j++) {
			for(int k=0;k<=9;k++) {
				ans += dp[i][j][k];
			}
		}
	}
	cout << ans << endl;
}
