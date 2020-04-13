#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX_N = 5e5+5;

string s;
ll ar[MAX_N];

void input() {
	cin >> s;
}

ll plu(ll to) {
	ll sum = 0;
	for(ll i=0;i<=to;i++) sum += i;
	return sum;
}

void solve() {
	ll n = s.size();
	vector<ll> ar;
	char c = s[0];
	ll cnt = 1;
	for(ll i=1;i<s.size();i++) {
		if(c == s[i]) cnt++;
		else {
			ar.push_back(cnt);
			cnt = 1;
			c = s[i];
		}
	}
	if(cnt>=1) {
		ar.push_back(cnt);
	}
	ll ars = (ll)ar.size();
	ll sum = 0;
	if(s[0]=='<') {
		for(ll i=0;i<ars-1;i+=2) {
			if(ar[i] < ar[i+1]) {
				ll key = ar[i];
				ll key2 = ar[i+1];
				sum += plu(key-1);
				sum += plu(key2);
			}else{
				ll key = ar[i];
				ll key2 = ar[i+1];
				sum += plu(key);
				sum += plu(key2-1);
			}
		}
	} else {
		sum += plu(ar[0]);
		for(ll i=1;i<ars-1;i+=2) {
			if(ar[i] < ar[i+1]) {
				ll key = ar[i];
				ll key2 = ar[i+1];
				sum += plu(key-1);
				sum += plu(key2);
			}else{
				ll key = ar[i];
				ll key2 = ar[i+1];
				sum += plu(key);
				sum += plu(key2-1);
			}
		}
	}
	if(ar.size()%2 == 1) {
		if(s[0]=='<') sum += plu(ar[ar.size()-1]);
	}
	if(ar.size()%2==0) {
		if(s[0]=='>') sum += plu(ar[ar.size()-1]);
	}
	cout << sum << endl;
}

int main(){
	input();
	solve();
}
