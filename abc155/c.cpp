#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i=0;i<n;i++) {
		cin >> s[i];
	}
	sort(s.begin(), s.end());
	vector<pair<int,string> > count;
	int c = 1;
	int key = 0;
	for(int i=1;i<n;i++) {
		if(s[key] == s[i]) {
			c++;
		} else {
			count.push_back({c, s[key]});
			key = i;
			c = 1;
		}
	}
	count.push_back({c,s[key]});
	// 番兵
	count.push_back({0, "last"});
	sort(count.rbegin(),count.rend());
	int i = 0;
	vector<string> ans;
	while(true) {
		ans.push_back(count[i].second);
		if(count[i].first > count[i+1].first) break;
		i++;
	}
	for(int i = ans.size()-1;i>=0;i--) cout << ans[i] << endl;
}
