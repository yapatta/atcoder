#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
vector<pair<ll,ll> > xy;
signed
main(){
	cin >> N;
	for(int i=0;i<N;i++){
		ll x,y;
		cin >> x >> y;
		xy.push_back(make_pair(x,y));
	}
	vector<vector<pair<ll,ll> > > z(N,vector<pair<ll,ll> >(N,make_pair(0,0) ) );
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			z[i][j].first = xy[i].first - xy[j].first;
			z[i][j].second = xy[i].second - xy[j].second;
			z[j][i].first = xy[j].first - xy[i].first;
			z[j][i].second = xy[j].second - xy[i].second;
		}
	}
	
	int ans = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j){
				continue;
			}
			//cout << z[i][j].first << " " << z[i][j].second << endl;
			ll x = z[i][j].first;
			ll y = z[i][j].second;
			int cnt = 0;
			for(int k=0;k<N;k++){
				for(int l=0;l<N;l++){
					if(k==l) continue;
					if(x==z[k][l].first && y==z[k][l].second){
						cnt++;
					}
				}
			}
			ans = max(ans,cnt);
		}
	}
	cout << N-ans << endl;
}
