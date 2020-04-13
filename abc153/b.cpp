#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll H, N;
	cin >> H >> N;
	ll sum = 0;
	for(int i=0;i<N;i++) {
		ll a;
		cin >> a;
		sum += a;
	}
	if(sum >= H) cout << "Yes" << endl;
	else cout << "No" << endl;
}
