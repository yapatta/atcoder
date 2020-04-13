#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N;
ll ans = LLONG_MAX;
map<vector<ll>, int> mp;

void dfs(vector<ll>& a)
{
	if(mp.count(a)==true)
		return;
	else mp[a] = 1;

	if(a.size()==2)
	{
		ans = min(ans, a[0]+a[1]);
		return;
	}
	else{
		for(int i=1;i<a.size()-1;i++)
		{
			vector<ll> tmp;
			for(int j=0;j<a.size();j++)
				tmp.push_back(a[j]);

			tmp[i-1]+= tmp[i];
			tmp[i+1]+= tmp[i];
			tmp.erase(tmp.begin()+i);
			dfs(tmp);
		}
	}
}

int main(){
	cin >> N;
	vector<ll> a(N);
	for(int i=0;i<N;i++)
	 cin >> a[i];
	dfs(a);
	cout << ans << endl;
}
