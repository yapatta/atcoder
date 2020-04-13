#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N_MAX = 2e5+5;

ll N, K;
ll A[N_MAX], F[N_MAX], T[N_MAX];

bool C(ll key) {
	ll sum = 0;
	for(int i=0;i<N;i++) {
		if(T[i] <= key) continue;
		ll tmp = T[i] - key;
		sum += (tmp + F[i] - 1) / F[i];
	}
	return K >= sum;
}

int main(){
	cin >> N >> K;
	for(int i=0;i<N;i++) cin >> A[i];
	for(int i=0;i<N;i++) cin >> F[i];
	sort(A,A+N);
	sort(F,F+N, greater<ll>());
	for(int i=0;i<N;i++) T[i] = A[i]*F[i];

	ll left = -1, right = A[N-1]*F[0]+1;
	while(right - left > 1) {
		// cout << left << " " << right << endl;
		ll mid = (left + right)/2;
		if(C(mid)) right = mid;
		else left = mid;
	}
	cout << right << endl;
}
