#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(pair<ll,ll> a, pair<ll,ll> b) {
	if(a.second != b.second) return a.second < b.second;
	else return a.first < b.first;
}

int main() {
	int n;
	cin >> n;
	vector<pair<ll,ll>> ab(n);
	for(int i=0;i<n;i++) {
		cin >> ab[i].first >> ab[i].second;
	}
	sort(ab.begin(),ab.end(), comp);
	ll now = 0;
	bool flag = true;
	for(int i=0;i<n;i++) {
		//cout << ab[i].first << " " << ab[i].second << endl;
		now += ab[i].first;
		if(now <= ab[i].second) {
			
		} else {
			flag = false;
		}
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}
