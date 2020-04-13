#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e7;

int main(){
	int n;
	cin >> n;
	vector<int> l(n), la(n);
	for(int i=0;i<n;i++) {
		cin >> l[i];
		la[i] = -l[i];
	}
	sort(l.begin(), l.end());
	sort(la.begin(), la.end());
	ll ans = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			int wa = l[i]+l[j];
			int sa = abs(l[i]-l[j]);
			auto witr = upper_bound(la.begin(), la.end(), -wa);
			int right = (int)(la.end()-witr);
			auto sitr = upper_bound(l.begin(), l.end(), sa);
			int left = (int)(sitr-l.begin());
			int plus = 0;
			if(right<=left) continue;
			if(left <= i and i < right) plus--;
			if(left <= j and j < right) plus--;
			plus += (right-left);
			if(plus>0) {
				// cout << abs(wa-sa)/2 << " " << (wa+sa)/2 << endl;
				ans += plus;
			}
		}
	}
	cout << ans/3 << endl;
}
