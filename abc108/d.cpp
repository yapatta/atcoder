#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	ll L;
	cin >> L;

	ll s = 0,pow = 1;
	while(1)
	{
			if(pow <= L && L < pow*2)
			{

					break;
			}else
			{
					s++;
					pow *= 2;
			}
	}
	s++;
	//最低s個頂点があれば良い, 頂点をs個にする
	vector<vector<vector<ll> > > node(s,vector<vector<ll>>(s));
	ll key = 1;
	for(int i=0;i<s-1;i++)
	{
			node[i][i+1].push_back(0);
			node[i][i+1].push_back(key);
			key++;
	}
	ll rest = L - pow;
	ll cnt = 0;
	for(int i=0;i<s;i++)
	{
			for(int j=i+2;j<s;j++)
			{
					node[i][j].push_back(0);
					cnt++;
					if(cnt==rest) break;
			}
			if(cnt==rest) break;
	}
	cout << s << " " <<  << endl;
}
