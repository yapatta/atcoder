#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main(){
	int n;
	string s;
	cin >> n >> s;
	ll ans = 1;
	vector<ll> al(26,0);
	for(int i=0;i<n;i++) {
		al[s[i]-'a']++;
	}
	for(int i=0;i<26;i++) {
		ans *= (al[i]+1);
		ans %= MOD;
	}
	cout << ans-1 << endl;
}
