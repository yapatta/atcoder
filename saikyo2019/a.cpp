#include <bits/stdc++.h>
using namespace std;

pair<int,int> buf[2000005];

int main() {
	for(int i=0;i<2*1e6+5;i++) buf[i] = {0,0};
	int n,m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	int cnt = 0;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(cnt > 2*1e6) {
				cout << -1 << endl;
				return 0;
			}
			int sum = a[i] + b[j];
			if(!(buf[sum].first==0 and buf[sum].second==0)) {
				cout << buf[sum].first << " " << buf[sum].second << " " << i << " " << j << endl;
				return 0;
			}
			buf[sum] = {i, j};
			cnt++;
		}
	}
	cout << -1 << endl;
}
