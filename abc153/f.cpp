#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N, D, A;
	cin >> N >> D >> A;
	vector<pair<ll,ll>> XH(N);
	for(auto &xh : XH) cin >> xh.first >> xh.second;
	sort(XH.begin(), XH.end());
	ll ans = 0;
	vector<ll> imos(N+1, 0);
	for(int i=0;i<N;i++) {
		if(i > 0) imos[i] += imos[i-1];
		if(XH[i].second - imos[i] > 0) {
			ll num = ((XH[i].second - imos[i]) + A -1) / A;
			ans += num;
			ll minus = num * A;
			imos[i+1] += minus;
			auto itr = upper_bound(XH.begin(), XH.end(), make_pair(XH[i].first + 2*D,LLONG_MAX));
			imos[itr - XH.begin()] -= minus;
			/*
			int j = i+1;
			while(XH[j].first <= XH[i].first + 2*D && j < N) {
				XH[j].second = max(XH[j].second - minus, 0LL);
				j++;
			}
			*/
		}
	}
	cout << ans << endl;
}
