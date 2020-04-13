#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N;
	cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	for(int i=1;i<N;i++) {
		ll sa = A[i] - A[i-1];
		if(sa == 0) cout << "stay" << endl;
		else if(sa > 0) cout << "up" << " " << sa << endl;
		else cout << "down" << " " << -sa << endl;
	}
}
