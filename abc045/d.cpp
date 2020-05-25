#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dy[] = {-1,-1,-1,0,0,0,1,1,1};
int dx[] = {-1,0,1,-1,0,1,-1,0,1};

int main() {
	ll H, W, N;
	cin >> H >> W >> N;
	map<pair<ll,ll>,ll> mp;
	for(int i=0;i<N;i++) {
		ll a, b;
		cin >> a >> b;
		a--, b--;
		for(int j=0;j<9;j++) {
			ll y = a + dy[j];
			ll x = b + dx[j];
			if(1 <= y and y <= H-2 and 1 <= x and x <= W-2) {
				mp[make_pair(y,x)]++;
			}
		}
	}
	vector<ll> ans(10, 0);
	for(auto &tmp : mp) {
		if(tmp.second > 0) {
			ans[tmp.second]++;
		}
	}
	ans[0] = (H - 2) * (W - 2) - accumulate(ans.begin(), ans.end(), 0);

	for(int i=0;i<10;i++) {
		cout << ans[i] << endl;
	}
}
