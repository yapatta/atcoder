#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	ll ans = 1;
	int color = 0;
	vector<ll> ar(100005,0);
	for(int i=0;i<n;i++) {
		if(a[i]==0) color++;
		ar[a[i]+1]++;
		if(ar[a[i]] > 0) {
			ans *= ar[a[i]];
			ar[a[i]]--;
		}else if(!(a[i] == 0)){
			cout << 0 << endl;
			return 0;
		}
		ans %= MOD;
		if(ans == 0) ans = MOD;
	}
	if(color==1) cout << 3*ans%MOD << endl;
	else cout << ans*6%MOD << endl;
}
