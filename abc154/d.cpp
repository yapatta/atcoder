#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, K;
	cin >> N >> K;
	vector<int> P(N);
	for(auto &p : P) cin >> p;
	vector<double> exp_value(N);
	for(int i=0;i<N;i++) {
		exp_value[i] = (1.0 + (double)P[i]) / 2.0;
	}
	double ans = 0;
	for(int i=0;i<K;i++) {
		ans += exp_value[i];
	}
	double seq = ans;
	for(int i=1;i<N-K+1;i++) {
		seq = seq + exp_value[i+K-1] - exp_value[i-1];
		if(ans < seq) {
			ans = seq;
		}
	}
	cout << fixed << setprecision(7) << ans << endl;
}
