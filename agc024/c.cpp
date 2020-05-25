#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int N;
	cin >> N;
	vector<ll> A(N);
	vector<int> Z;
	for(int i=0;i<N;i++) {
		cin >> A[i];
		if(A[i] == 0LL) {
			Z.push_back(i);
		}
	}
	if(Z.size() == 0 || A[0] != 0) {
		cout << -1 << endl;
		return 0;
	}
	Z.push_back(INT_MAX);

	ll ans = 0;
	ll beforeA = INT_MIN;
	for(int i=N-1;i>=0;i--) {
		int bz = *(upper_bound(Z.begin(), Z.end(), i) - 1);
		if(A[i] <= i - bz) {
			if(A[i] == beforeA - 1) {
				beforeA = A[i];
			} else if(A[i] > beforeA - 1) {
				ans += A[i];
				beforeA = A[i];
			} else {
				cout << -1 << endl;
				return 0;
			}
		} else {
			cout << -1 << endl;
			return 0;
		}
	}

	cout << ans << endl;
}
