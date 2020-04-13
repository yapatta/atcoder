#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> d(n);
	for(int i=0;i<n;i++) cin >> d[i];
	ll ans = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			ans += d[i]*d[j];
		}
	}
	cout << ans << endl;
}
