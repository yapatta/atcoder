#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();
	vector<int> div;
	div.push_back(-1);
	for(int i=0;i<n-1;i++) {
		if(s[i] != s[i+1]) {
			div.push_back(i);
		}
	}
	div.push_back(n-1);
	vector<int> ans(n, 0);
	for(int i=0;i<div.size();i++) {
		if(i%2==1) {
			int left = div[i] - div[i-1];
			int right = div[i+1] - div[i];
			//cout << left << " " << right << endl;

			ans[div[i]] += (left+1)/2;
			ans[div[i]+1] += left/2;

			ans[div[i]+1] += (right+1)/2;
			ans[div[i]] += right/2;
			/*
			if((left+right)%2 == 0) {
				ans[div[i]] = ans[div[i]+1] = (left+right)/2;
			} else {
				if(right%2 == 0) {
					ans[div[i]] = (right+left)/2;
					ans[div[i]+1] = (right+left)/2 + 1;
				} else {
					ans[div[i]] = (left+right)/2 + 1;
					ans[div[i]+1] = (left+right)/2;
				}
			}
			*/
		}
	}
	for(int i=0;i<n;i++) cout << ans[i] << ((i==n-1)?"\n":" ");
}
