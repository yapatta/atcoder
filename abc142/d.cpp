#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline ll gcd(ll a, ll b) {
	if(a==0) return b;
	if(a>b) return gcd(a%b, b);
	else return gcd(b%a, a);
}

ll primeNum(ll g) {
	ll cnt = 1;
	ll i = 2;
	ll now = g;
	while (now > 1) {
		if(now%i==0) cnt++;
		while(now%i==0) {
			now /= i;		
		}
		i++;
		if(i*i>g) {
			cnt++;
			break;
		}
	}
	return cnt;
}

int main(){
	ll a,b;
	cin >> a >> b;
	ll g = gcd(a,b);
	ll num = primeNum(g);
	cout << num << endl;
}
