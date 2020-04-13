#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	string s,t;
	cin >> s >> t;

	vector<vector<ll> > mp(26);

	for(ll i=0;i<s.size();i++)
	{
		ll id=s[i]-'a';
		mp[id].push_back(i);
	}

	ll now=-1;
	ll loop=0;

	for(ll i=0;i<t.size();i++)
	{
		ll id=t[i]-'a';
		if(mp[id].size()==0)
		{
			cout << -1 << endl;
			return 0;
		}

		if(mp[id][mp[id].size()-1]<=now)
		{
			now=mp[id][0];
			loop++;
		}else
		{
			auto itr=lower_bound(mp[id].begin(),mp[id].end(),now+1);
			now=*itr;
		}
	}


	cout << loop*s.size()+now+1 << endl;





}
