#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll N; cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	ll ans = 0;	
	if(N == 3) {
		cout << max(A[0], max(A[1], A[2])) << endl;
		return 0;
	}
	if(N % 2 == 0) {
		ll left = 0, right = 0;
		for(int i=0;i<N;i++) {
			if(i % 2 == 0) {
				left += A[i];
			} else {
				right += A[i];
			}
		}
		ans = max(left, right);
		cout << ans << endl;
		return 0;
	} else {
		ll n = N / 2;
		// 1個隙間を決める
		vector<ll> left(N+1, 0), right(N+1, 0);
		for(int i=1;i<=N;i++) {
			if(i%2 == 0) {
				left[i] = left[i-1] + A[i-1];
				right[i] = right[i-1];
			} else {
				left[i] = left[i-1];
				right[i] = right[i-1] + A[i-1];
			}
		}
		for(int i=1;i<=N;i++) {
			ll tmp = 0;
			if(i % 2 == 1) {
				tmp += max(left[i-1], right[i-1]);
				tmp += max(left[N] - left[i], right[N] - right[i]);
			} else {
				tmp += max(left[i-1] + right[N] - right[i], right[i-1] + left[N] - left[i]);
			}
			ans = max(ans, tmp);
		}
		cout << ans << endl;
		return 0;
	}
}
