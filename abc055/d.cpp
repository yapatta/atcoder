#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	string s;
	cin >> n >> s;

	bool oflag = false, xflag = false;
	vector<pair<int,int>> o,x;
	int left, right;
	for(int i=0;i<n;i++) {
		if(s[i]=='o') {
			if(xflag) {
				right = i-1;
				x.push_back(make_pair(left,right));
				xflag = false;
			}

			if(!oflag) {
				left = i;
				oflag = true;
			}
		}
		if(s[i]=='x') {
			if(oflag) {
				right = i-1;
				o.push_back(make_pair(left,right));
				oflag = false;
			}

			if(!xflag) {
				left = i;
				xflag = true;
			}
		}
	}
	// 最後
	if(s[n-1] == 'o') {
		o.push_back(make_pair(left,n-1));
	} else {
		x.push_back(make_pair(left,n-1));
	}

	int osize, xsize;
	if(o[0].first == 0 and o[o.size()-1].second == n-1) {
		osize = (int)o.size()-1;
	} else {
		osize = (int)o.size();
	}
	if(x[0].first == 0 and x[x.size()-1].second == n-1) {
		xsize = (int)x.size()-1;
	} else {
		xsize = (int)x.size();
	}

	if((int)o.size() % 2 == 1) {
		cout << -1 << endl;
		return 0;
	}
	vector<bool> ans(n,true);
	for(int i=0;i<o.size();i++) {
		if(i%2 == 1) {
			int l = o[i].first;
			int r = o[i].second;
			for(int j=l;j<=r;j++) ans[j] = false;
		}
	}
	for(int i=0;i<n;i++) {
		if(ans[i]) cout << 'S';
		else cout << 'W';
	}
	cout << endl;

	/*
	for(int i=0;i<o.size();i++) cout << o[i].first << " " << o[i].second << endl;
	for(int i=0;i<x.size();i++) cout << x[i].first << " " << x[i].second << endl;
	*/
}
