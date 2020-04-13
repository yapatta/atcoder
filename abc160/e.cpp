#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define All(x) (x).begin(),(x).end()
#define RAll(x) (x).rbegin(),(x).rend()


int main(){
	ll X, Y, A, B, C;
	cin >> X >> Y >> A >> B >> C;
	vector<ll> P(A), Q(B), R(C);
	for(auto &t : P) cin >> t;
	for(auto &t : Q) cin >> t;
	for(auto &t : R) cin >> t;
	//sort(All(p));
	//sort(All(q));
	//sort(All(r));
	priority_queue<pair<ll,int>> pq;
	for(auto t: P) pq.push({t,1});
	for(auto t: Q) pq.push({t,2});
	for(auto t: R) pq.push({t,3});
	ll ans = 0;
	ll r = 0, g = 0, n = 0;
	while(!pq.empty()) {
		auto tmp = pq.top();
		pq.pop();
		if(tmp.second == 1 and r < X) {
			r++;
			ans += tmp.first;
		}
		if(tmp.second == 2 and g < Y) {
			g++;
			ans += tmp.first;
		}
	   	if(tmp.second == 3)	{
			n++;
			ans += tmp.first;
		}
		if(r + g + n == X + Y) {
			break;
		}
	}
	cout << ans << endl;
}
