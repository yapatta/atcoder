#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int c;
	cin >> c;
	vector<pair<int,pair<int,int>>> p(c);
	for(int i=0;i<c;i++) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		p[i] = {a[0],{a[1],a[2]}};
	}
	
	int n = p[0].first, m = p[0].second.first, l = p[0].second.second;
	for(auto tmp : p) {
		n = max(n, tmp.first);
		m = max(m, tmp.second.first);
		l = max(l, tmp.second.second);
		//cout << tmp.first << " " << tmp.second.first << " " << tmp.second.second << endl;
	}
	//cout << n << " " << m << " " << l << endl;
	cout << n*m*l << endl;
}
