#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

int main(){
	ll n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	ll plusm = 0;
	vector<int> ini(n,0), plus(n,0);
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(a[i] > a[j]) {
				plus[i]++;
			}
		}
		plusm += plus[i];
		plusm %= MOD;
	}
	ll inim = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i] > a[j]) {
				ini[i]++;
			}
		}
		inim += ini[i];
		inim %= MOD;
	}
	ll sum = 0;
	sum += (inim*k);
	sum %= MOD;
	ll tmp = ((k-1)*k/2)%MOD;
	sum += (plusm*tmp)%MOD;
	sum %= MOD;
	cout << sum << endl;

}
