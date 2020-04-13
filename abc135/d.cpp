#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll ans = 0;
string s;

void dfs(ll n, ll sum)
{
	if(n == -1)
	{
		if(sum%13 == 0)
			ans ++;
		ans %= MOD;
		return;
	}
	sum %= 13;
	if(s[n] == '?')
	{
		for(ll i=0;i<=9;i++)
		{
			dfs(n-1, sum+i);
		}
	}else{
		dfs(n-1, sum +(s[n]-'0'));
	}
}
int main() {
	cin >> s;
	if(s[s.size()-1] == '?')
	{
		for(int i=1;i<=4;i++)
		{
			ll sum = 4*((s[s.size()-1]-'0')-5);
			dfs(s.size()-2, sum);
		}
		for(int i=5;i<=9;i++)
		{
			ll sum = 4*((s[s.size()-1]-'0')+5);
			dfs(s.size()-2, sum);
		}
	}else
	{
		dfs(s.size()-1, 0);
	}
	cout << ans << endl;
}
