#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int N, K;
	cin >> N >> K;
	vector<double> R(N);
	for(auto &r : R) cin >> r;
	sort(R.rbegin(), R.rend());
	double ans = 0.0;
	for(int i=K-1;i>=0;i--) {
		ans = (ans+R[i]) / 2.0;
	}
	cout << fixed << setprecision(7) << ans << endl;
}
