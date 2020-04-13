#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for(auto&a : A) cin >> a;
	sort(A.begin(), A.end());

	ll ok = 1e18, ng = -1e18;
	while(ok - ng > 1) {
		ll mid = (ok + ng) / 2;
		ll eq_and_less_than_mid_num = 0;
		for(ll i=0;i<N-1;i++) {
			if(A[i] < 0) {
				// j > iについてA[i]との積がmidよりも小さくなるA[j]の数
				ll left = i;
				ll right = N;
				while(right - left > 1) {
					ll upper_mid = (left + right) / 2;
					if(A[i] * A[upper_mid] <= mid) right = upper_mid;
					else left = upper_mid;
				}
				eq_and_less_than_mid_num += (N - right);
			}else {
				ll left = i;
				ll right = N;
				while(right - left > 1) {
					ll upper_mid = (left + right) / 2;
					if(A[i] * A[upper_mid] <= mid) left = upper_mid;
					else right = upper_mid;
				}
				eq_and_less_than_mid_num += (left - i);
			}
		}
		if(eq_and_less_than_mid_num >= K) ok = mid;
		else ng = mid;
	}
	cout << ok << endl;
}
