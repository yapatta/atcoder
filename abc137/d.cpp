#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n,m;
	cin >> n >> m;
	vector<pair<ll,ll> > ab(n);
	for(int i=0;i<n;i++) {
		int a,b;
		cin >> a >> b;
		ab[i] = make_pair(a,b);
	}
	sort(ab.begin(),ab.end());
	priority_queue<ll> pq;
	ll ans = 0;
	int j = 0;
	for(ll i=1;i<=m;i++) {
		while(ab[j].first <= i and j <n) {
			pq.push(ab[j].second);
			j++;
		}
		if(!pq.empty()) {
			//cout << pq.top() << endl;
			ans += pq.top();
			pq.pop();
		}
	}
	cout << ans << endl;
}
