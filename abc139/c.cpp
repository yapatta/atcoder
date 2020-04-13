#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> h(n);
	for(int i=0;i<n;i++) {
		cin >> h[i];
	}
	vector<int> p(n,0);
	p[0] = 0;
	for(int i=1;i<n;i++) {
		if(h[i-1] >= h[i]) {
			p[i] = p[i-1] + 1;
		}else {
			p[i] = 0;
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++)
		if(p[i] > ans)
			ans = p[i];

	cout << ans << endl;
}
