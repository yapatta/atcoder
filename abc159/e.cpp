#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
	ll H, W, K;
	cin >> H >> W >> K;
	vector<string> S(H);
	for(ll i=0;i<H;i++) {
		cin >> S[i];
	}

	ll ans = LLONG_MAX;
	for(ll bit=0;bit<(1<<(H-1));bit++) {
		// sliceする場所
		vector<ll> sl;
		for(ll i=0;i<H-1;i++)
			if(bit & (1<<i))
				sl.push_back(i);

		sl.push_back(LLONG_MAX);
		vector<ll> white((ll)sl.size(), 0);
		bool flag = true;

		// 線の本数
		ll line = (ll)sl.size() - 1;
		for(ll w=0;w<W;w++) {
			// 横線何本目より前か
			ll cnt = 0;
			vector<ll> nx_white((ll)white.size(), 0);
			for(ll h=0;h<H;h++) {
				if(h > sl[cnt]) {
					cnt++;
				}
				if(S[h][w] == '1') nx_white[cnt]++;
				if(nx_white[cnt] > K) {
					flag = false;
					break;
				}
			}
			if(flag == false) break;

			bool linef = false;
			for(ll i=0;i<white.size();i++) {
				if(white[i] + nx_white[i] > K) {
					line++;
					linef = true;
					break;
				}
			}
			if(linef) {
				for(ll i=0;i<white.size();i++)
					white[i] = nx_white[i];
			} else {
				for(ll i=0;i<white.size();i++)
					white[i] += nx_white[i];
			}
		}
		if(flag)ans = min(ans, line);
	}
	cout << ans << endl;
}
