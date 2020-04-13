#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, K;
	cin >> N >> K;
	vector<int> P(N);
	for(auto &p : P) cin >> p;
	int ans = 0;
	for(int i=0;i<K;i++) {
		ans += (P[i] + 1);
	}
	for(int i=1;i<N-K+1;i++) {
		int nx_ans = ans - (P[i-1] + 1) + (P[i+K-1] + 1);
		cout << nx_ans << endl;
		if(ans < nx_ans) {
			ans = nx_ans;
		}
	}
	cout << fixed << setprecision(7) << (double)ans / 2 << endl;
}
