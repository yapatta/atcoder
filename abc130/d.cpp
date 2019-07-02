#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N,K;
	cin >> N >> K;
	vector<ll> a(N+1);
	for(int i=0;i<N;i++){
			cin >> a[i];
	}
	a[N] = -(1e12);

	ll sum = a[0];
	ll ans = 0;
	ll l=0,r=1;
	while(1){
			if( r==N and sum < K) break;
			if(sum < K){
					sum += a[r];
					if(r<N) r++;
			}else{
					ans += (N-r+1);
					sum -= a[l];
					if(l<N) l++;
			}
	}
	cout << ans << endl;
	return 0;
}
