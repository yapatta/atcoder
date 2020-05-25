#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<int> P(N);
	for(auto &p : P) cin >> p;
	int ascend = 0, descend = 0;
	int before = N+1;
	for(int i=N-1;i>=0;i--) {
		if(before - 1 == P[i]) {
			descend++;
			before = P[i];
		}
	}
	before = 0;
	for(int i=0;i<N;i++) {
		if(before + 1 == P[i]) {
			ascend++;
			before = P[i];
		}
	}
	cout << min(N - ascend, N - descend) << endl;
}
