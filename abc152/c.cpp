#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N;
	cin >> N;
	vector<int> P(N);
	for(auto &p : P) cin >> p;
	int ans = 0;
	int m = INT_MAX;
	for(int i=0;i<N;i++) {
		if(P[i] <= m) ans++;
		m = min(m, P[i]);
	}
	cout << ans << endl;
}
