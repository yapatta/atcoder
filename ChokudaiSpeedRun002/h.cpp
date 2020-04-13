#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		ll a,b;
		cin >> a >> b;
		ll tmp = llabs(a-b);
		if(tmp==0) {
			cout << -1 << endl;
			continue;
		}
		if(a%tmp==0 or b%tmp==0) {
			cout << -1 << endl;
		}else {
			cout << tmp << endl;
		}
	}
}
