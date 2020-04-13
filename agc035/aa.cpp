#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	vector<ll> a(N);
	for(int i=0;i<N;i++)
		cin >> a[i];
	
	sort(a.begin(),a.end());
	map<ll,ll> mp;
	bool flag = false;
	
	for(int i=0;i<N;i++) {
		mp[a[i]]++;
	}
	if(mp.size()==1) {
		if(a[N-1]==0)
			flag = true;
	}else if(mp.size()==2) {
		vector<pair<ll,ll>> tmp;
		for(auto i : mp) {
			tmp.push_back({i.first,i.second});
		}
		if(tmp[0].first == 0) {
			if(2*tmp[0].second == tmp[1].second) {
				flag = true;
			}
		}
	}else if(mp.size()==3) {
		vector<pair<ll,ll>> tmp;
		for(auto i : mp) {
			tmp.push_back({i.first,i.second});
		}
		if( (tmp[0].first^tmp[1].first^tmp[2].first) == 0) {
			if(tmp[0].second == tmp[1].second and tmp[1].second == tmp[2].second) {
				flag = true;
			}
		}
	}
	
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}
