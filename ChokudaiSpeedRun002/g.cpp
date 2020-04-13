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
		cout << gcd(a,b) << endl;
	}
}
