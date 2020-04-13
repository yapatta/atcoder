#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N_MAX = 2e5+5;

ll N, K;
ll A[N_MAX], F[N_MAX];

int C(ll key) {
	ll sum = 0;
	ll tmp[N] = {0};
	for(int i=0;i<N;i++) {
		// keyから何回減らせられるか
		tmp[i] = key/F[i];
	}
	for(int i=0;i<N;i++) {
		if(tmp[i] <= A[i]) sum += (A[i]-tmp[i]);
	}
	return K >= sum;
}

int main(){
	cin >> N >> K;
	for(int i=0;i<N;i++) cin >> A[i];
	for(int i=0;i<N;i++) cin >> F[i];
	sort(A,A+N);
	sort(F,F+N, greater<ll>());

	ll left = -1, right = A[N-1]*F[0]+1;
	while(right - left > 1) {
		// cout << left << " " << right << endl;
		ll mid = (left + right)/2;
		if(C(mid)) right = mid;
		else left = mid;
	}
	cout << right << endl;
}
