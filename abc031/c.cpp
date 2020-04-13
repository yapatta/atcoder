#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(pair<int,int> a, pair<int,int> b) {
	if(a.second == b.second) {
		return a.first > b.first;
	}else{
		return a.second < b.second;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<pair<int,int> > p;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	for(int i=0;i<n;i++) {
		int lans = -100, rans = -100;
		for(int j=0;j<n;j++) {
			// 同じとこに丸をつけられない
			if(j==i) continue;
			int x = 0, y = 0;
			int left = min(i,j), right = max(i,j);
			for(int k=left;k<=right;k++) {
				if((k-left)%2 == 0) {
					x += a[k];
				}else {
					y += a[k];
				}
			}
			if(rans < y) {
				lans = x;
				rans = y;
			}
		}
		p.push_back(make_pair(lans, rans));
	}
	sort(p.begin(),p.end());
	cout << p[p.size()-1].first << endl;
}
