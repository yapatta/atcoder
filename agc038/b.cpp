#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define REPS(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define REP(i,n) reps(i,0,n)
#define REPTR(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define ALL(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;


int main() {
	int n,k;
	cin >> n >> k;
	vector<ll> p(n);
	for(int i=0;i<n;i++) {
		cin >> p[i];
	}
	vector<pair<bool,bool> > b(n);
	if(p[0] > p[1]) {
		b[0] = {0, 1};
	}else {
		b[0] = {0, 0};
	}
	for(int i=1;i<n-1;i++) {
		bool left = false, right = false;
		if(p[i-1] >  p[i]) left = true;
		if(p[i] >  p[i+1]) right = true;
		b[i] = {left, right};
	}	
	if(p[n-2] > p[n-1]) {
		b[n-1] = {1, 0};
	}else {
		b[n-1] = {0, 0};
	}
	int ans = 0;
	int left = 1, right = k-2;
	int cnt = 0;
	for(int i=left;i<=right;i++) {
		if(b[i].first) cnt++;
		if(b[i].second) cnt++;
	}
	for(int i=0;i<n-k+1;i++) {
		if(cnt>=1) {
			if(b[left].second == 0 and b[right].first == 0)
				continue;
			else ans++;
		}
		if(b[left].first==1) cnt--;
		if(b[left].second==1) cnt--;
		left++;
		right++;
		if(b[right].first==1) cnt++;
		if(b[right].second==1) cnt++;
	}

	cout << 1 + ans << endl;
}
