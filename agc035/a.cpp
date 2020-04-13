#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N;
int main(){
	cin >> N;
	map<ll,ll> mp;
	for(int i=0;i<N;i++)
	{
		ll a;
		cin >> a;
		mp[a]++;
	}
	bool flag = false;
	if(mp.size()==1)
	{
		if(mp[0]==N)
			flag = true;
		else
			flag = false;
	}else{
		if(N%3==0)
		{
			if(mp.size()==3)
			{
				vector<ll> tmp;
				flag = true;
				for(auto itr=mp.begin();itr!=mp.end();itr++)
				{
					tmp.push_back(itr->first);
					if(itr->second != N/3)
						flag = false;
				}
				if((tmp[0]^tmp[1]^tmp[2])!=0 or (tmp[0] == tmp[1] and tmp[1] == tmp[2]))
					flag = false;

			}else if(mp.size()==2)
			{
				vector<pair<ll,ll> > tmp;
				for(auto itr=mp.begin();itr!=mp.end();itr++)
				{
					tmp.push_back(make_pair(itr->second,itr->first) );
				}
				sort(tmp.begin(),tmp.end());
				if(tmp[0].first==0 && tmp[1].second==((N/3)*2) && tmp[0].second==(N/3) )
					flag = true;
			}
		}
	}
	
	cout << ((flag)? "Yes": "No") << endl;
}
