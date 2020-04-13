#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N, K;
	cin >> N >> K;
	vector<ll> H(N);
	for(auto &h : H) cin >> h;
	sort(H.begin(), H.end());
	ll ans = 0;
	for(int i=N-1;i>=0;i--) {
		if(K > 0) {
			K--;
		} else {
			ans += H[i];
		}
	}
	cout << ans << endl;
}
