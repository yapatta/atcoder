#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// A[i] * A[j] <= keyとなる組み合わせの個数がK以上か
bool C(const ll &key, const vector<ll> &arr, const ll &asize, const ll &k) {
	ll eq_or_less_than_key = 0;
	for(int i = 0;i < asize - 1;i++) {
		// i < jとなり, arr[i] * arr[j] <= keyとなる個数
		if(arr[i] >= 0) {
			int left = i, right = asize;
			while(right - left > 1) {
				int mid = (left + right) >> 1;
				if(arr[i] * arr[mid] <= key) left = mid;
				else right = mid;
			}
			eq_or_less_than_key += (left - i);
		} else {
			int left = i, right = asize;
			while(right - left > 1) {
				int mid = (left + right) >> 1;
				if(arr[i] * arr[mid] <= key) right = mid;
				else left = mid;
			}
			eq_or_less_than_key += (asize - right);
		}
	}
	if(eq_or_less_than_key >= k) return true;
	else return false;
}

int main(void) {
	ll N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	sort(A.begin(), A.end());
	// ok以下で成立
	ll ok = 1e18, ng = -1e18;
	while(ok - ng > 1) {
		ll mid = (ok + ng) / 2;
		if(C(mid, A, N, K)) ok = mid;
		else ng = mid;
	}
	cout << ok << endl;
}
