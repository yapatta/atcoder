#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t, n, m;
	cin >> t >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	cin >> m;
	vector<int> b(m);
	for(int i=0;i<m;i++) cin >> b[i];
	int i = 0;
	vector<bool> flag(m,false);
	for(int j=0;j<m;j++) {
		while(i < n) {
			int left = a[i], right = a[i] + t;
			if(left <= b[j] and b[j] <= right) {
				flag[j] = true;
				i++;
				break;
			} else {
				i++;
			}
		}
	}
	for(int i=0;i<m;i++) {
		if(!flag[i]) {
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
}
