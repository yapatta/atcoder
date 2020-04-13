#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 1e4+5;

int N;
ll a[MAX_N], b[MAX_N];

void input() {
	cin >> N;
	for(int i=0;i<N;i++) cin >> a[i];
	for(int i=0;i<N;i++) cin >> b[i];
}
void solve() {
	//sort(a, a+N);
	//sort(b, b+N);
	ll add = 0;
	for(int i=0;i<N;i++) {
		if(a[i] > b[i]) {
			// この回数ここにa-bを足す必要がある
			add -= (a[i]-b[i]);
		} else if(a[i] < b[i]) {
			// この差/2だけ足す余裕がある
			add += (b[i]-a[i])/2;
		}
	}
	cout << ((add>=0)?"Yes":"No") << endl;
}

int main(){
	input();
	solve();
}
