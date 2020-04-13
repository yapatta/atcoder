#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	string S;
	ll K;
	cin >> S >> K;
	ll i=0;
	ll ans_one = 0;
	while(i < S.size()) {
		ll cnt = 1;
		while(S[i] == S[i+cnt] and i+cnt < S.size()) {
			cnt++;
		}
		ans_one += (cnt/2);
		i += cnt;
	}
	if(S[0] == S[S.size()-1]) {
		ll fcnt = 1, bcnt = 1;
		while(S[0] == S[fcnt] and fcnt < S.size()) fcnt++;
		while(S[S.size()-1] == S[S.size()-1-bcnt] and bcnt < S.size()) bcnt++;
		if(fcnt == S.size()) cout << ((ll)S.size() * K) / 2 << endl;
		else cout << ans_one * K + (K-1) * ((fcnt+bcnt)/2 - fcnt/2 - bcnt/2) << endl;
	} else {
		cout << ans_one * K << endl;
	}
}
