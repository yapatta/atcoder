#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()


int main(){
	ll K;
	cin >> K;
	ll ans = 0;
	for(int i=1;i<=K;i++) {
		for(int j=1;j<=K;j++) {
			for(int k=1;k<=K;k++) {
				ans += gcd(gcd(i,j), k);
			}
		}
	}
	cout << ans << endl;
}
