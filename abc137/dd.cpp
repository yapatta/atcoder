#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n,m;
	cin >> n >> m;
	
	vector<pair<ll,ll>> ab;
	priority_queue<ll> pq;

	for(ll i=0;i<n;i++) {
		ll a,b;
		cin >> a >> b;
		ab.push_back(make_pair(a,b));
	}

	sort(ab.begin(), ab.end());

	ll ans = 0;
	// 後ろから見ていく
	int j = 0;
	for(ll i=1;i<=m;i++) {
		// 今選べる仕事をすべてpush
		while(j < n and ab[j].first <= i) {
			pq.push(ab[j].second);
			j++;
		}
		// queueの中から取れる一番いい仕事を
		if(!pq.empty()) {
			ans += pq.top();
			pq.pop();
		}
	}

	cout << ans << endl;
}
