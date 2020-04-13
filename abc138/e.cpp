#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string s,t;
	cin >> s >> t;
	vector<vector<ll>> al(26);
	for(int i=0;i<s.size();i++) {
		al[s[i]-'a'].push_back(i);
	}

	ll now = -1;
	ll loop = 0;
	for(int i=0;i<t.size();i++) {
		ll id = t[i]-'a';
		if(al[id].size()==0){
			cout << -1 << endl;
			return 0;
		}
		ll last = al[id].size()-1;
		if(al[id][last] <= now) {
			loop++;
			now = al[id][0];
		}else {
			auto itr = lower_bound(al[id].begin(), al[id].end(), now+1);
			now = *itr;
		}
	}
	ll ans = loop*s.size()+now+1;
	cout << ans << endl;
}
