#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int goods[] = {100,101,102,103,104,105};

int main(){
	int x;
	cin >> x;
	vector<bool> dp(x+5, false);
	dp[0] = true;
	for(int i=0;i<=x;i++) {
		for(int j=0;j<6;j++) {
			if(i-goods[j]>=0) dp[i] = dp[i] | dp[i-goods[j]];
		}
	}
	cout << dp[x] << endl;
}
