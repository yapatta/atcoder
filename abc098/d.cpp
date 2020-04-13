#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	// 閉区間[left, right]
	ll left = 0, right = 0;
	ll val = 0;
	ll xorval = 0;
	ll ans = 0;
	while(right < N) {
		if(xorval & A[right]) {
			right--;
			break;
		}
		xorval ^= A[right++];
	}
	if(right == N) right--;
	// 要素数はright+1
	ans += (right + 1) * (right + 2) / 2;

	while(1) {
		// 左を一個消す
		xorval ^= A[left++];
		if(left >= N) {
			break;
		}
		// 右を最大まで伸ばす
		right++;
		while(right < N) {
			if(xorval & A[right]) {
				right--;
				break;
			}
			ans += (right-left+1);
			xorval ^= A[right++];
		}
	}
	
	cout << ans << endl;
}
