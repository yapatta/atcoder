#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9+5;

int main(){
	string s;
	cin >> s;
	int n = (int)s.size();
	vector<int> left, right;
	for(int i=0;i<s.size()-1;i++) {
		if(s[i]=='R' and s[i+1]=='L') {
			left.push_back(i);
			right.push_back(i+1);
		}
	}
	left.push_back(INF);
	right.push_back(INF);
	vector<int> ans(n,0);
	for(int i=0;i<n;i++) {
		if(s[i]=='R') {
			auto nearL = upper_bound(right.begin(),right.end(),i);
			int pos = *nearL;
			int dist = pos - i;
			if(dist%2 == 0) ans[pos]++;
			else ans[pos-1]++;
		} else {
			auto nearR = upper_bound(left.begin(),left.end(),i) - 1;
			int pos = *nearR;
			int dist = i - pos;
			if(dist%2 == 0) ans[pos]++;
			else ans[pos+1]++;
		}
	}
	for(int i=0;i<n;i++) {
		cout << ans[i] << ((i==n-1)?"\n":" ");
	}
}
