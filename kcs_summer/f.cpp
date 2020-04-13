#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<ll> p(n);
	for(int i=0;i<n;i++) {
		ll a;
		cin >> a;
		ll cnt = 0;
		while(1) {
			if(a%2==0) {
				a /= 2;
				cnt++;
			}else {
				break;
			}
		}
		p[i] = cnt;
	}
	sort(p.begin(),p.end());
	cout << p[0] << endl;
}
