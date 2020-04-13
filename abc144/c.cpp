#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n;
	cin >> n;
	ll left = 1, right = n;
	for(ll i=1;i*i<=n;i++) {
		if(n%i==0) {
			left = i;
			right = n/i;
		}
	}
	cout << left+right-2 << endl;
}
