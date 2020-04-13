#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9+7;

int main() {
	ll n, m;
	string s;
	cin >> n >> m;
	cin >> s;
	if(s[0]=='1') {
		cout << -1 << endl;
		return 0;
	}
	int now = n;
	vector<int> ans;
	while(now != 0) {
		int next = 0;
		for(int mi=1;mi<=m;mi++) {
			if(s[now-mi] == '0') {
				if(next <= mi and now-mi >= 0) {
					next = mi;
				}
			}
		}
		if(next == 0) {
			cout << -1 << endl;
			return 0;
		} else{
			now -= next;
			ans.push_back(next);
		}
	}
	for(int i=ans.size()-1;i>=0;i--) {
		cout << ans[i] << ((i==0)?"\n":" ");
	}
}
