#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<vector<int>> x(n), y(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
		for(int j=0;j<a[i];j++) {
			int s, t;
			cin >> s >> t;
			s--;
			x[i].push_back(s);
			y[i].push_back(t);
		}
	}
	int ans = 0;

	for(int bit=0;bit<(1<<n);bit++) {
		bool flag= true;
		set<int> st, dt;
		int cnt = 0;
		for(int i=0;i<n;i++) {
			// 正直者
			if(bit & (1<<i)) {
				cnt++;
				st.insert(i);
				for(int j=0;j<a[i];j++) {
					if(y[i][j]) {
						st.insert(x[i][j]);
					} else{
						dt.insert(x[i][j]);
						if(st.count(x[i][j])) flag = false;
					}
				}
			} else {
				dt.insert(i);
				/*
				for(int j=0;j<a[i];j++) {
					if(!y[i][j]) {
						st.insert(x[i][j]);
					} else {
						if(st.count(x[i][j])) flag = false;
					}
				}
				*/
			}

		}
		if(flag and (int)st.size()+(int)dt.size() == n and cnt == (int)st.size()) ans = max(ans, (int)st.size());
	}
	cout << ans << endl;
}
