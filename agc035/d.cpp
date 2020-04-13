#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N;
ll ans = LLONG_MAX;
void dfs(vector<ll>& a)
{
	if(a.size()==2)
	{
		ans = min(ans, a[0]+a[1]);
		return;
	}
	pair<ll,int> mitr;
	mitr.first = 1;
	mitr.second = 1;
	for(int i=0;i<a.size();i++)
		cout << a[i] << " ";
	cout << endl;
	for(int i=2;i<a.size()-1;i++)
	{
		if(a[mitr.first] > a[i])
		{
			mitr.first = i;
			mitr.second = 1;
		}else if(a[mitr.first] == a[i])
		{
			mitr.second++;
		}
	}
	if(mitr.second==1)
	{
		int itr = mitr.first;
		a[itr-1]+= a[itr];
		a[itr+1]+= a[itr];
		a.erase(a.begin()+itr);
		dfs(a);
	}else{
		for(int i=0;i<mitr.second;i++)
		{
			vector<ll> tmp;
			for(int j=0;j<a.size();j++)
				tmp.push_back(a[j]);

			int itr = mitr.first;
			tmp[itr-1]+= tmp[itr];
			tmp[itr+1]+= tmp[itr];
			tmp.erase(tmp.begin()+itr);
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
