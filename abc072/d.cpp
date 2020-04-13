#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<int> P(N);
	for(auto &p : P) cin >> p;
	int cnt = 0;
	vector<bool> same(N,0);
	for(int i=0;i<N;i++) {
		if(P[i] == i+1) same[i] = true;
	}
	for(int i=0;i<N;i++) {
		if(i < N-1 and same[i] == true) {
			cnt++;
			same[i] = false;
			same[i+1] = false;
			i++;
		} else if(same[i] == false) {
			continue;
		}
	}
	if(same[N-1]) {
		same[N-1] = false;
		same[N-2] = false;
		cnt++;
	}
	cout << cnt << endl;
}
