#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 200005
using namespace std;
const ll MOD=1e9+7;

int main(){
	ll N,D,K;
	cin >> N >> D >> K;
	vector<pair<ll,ll>> lr(D), st(K);
	rep(i,D){
		cin >> lr[i].first >> lr[i].second;
		lr[i].first--;
		lr[i].second--;
	}
	rep(i,K){
		ll s, t;
		cin >> s >> t;
		s--, t--;
		st[i] = make_pair(s,t);
	}

	vector<ll> ans(K, 0);
	for(int i=0;i<K;i++) {
		for(int j=0;j<D;j++) {
			if(lr[j].first <= st[i].first and st[i].first <= lr[j].second) {
				if(lr[j].first <= st[i].second and st[i].second <= lr[j].second) {
					ans[i] = j+1;
					break;
				} else {
					if(abs(st[i].second - lr[j].first) > abs(st[i].second - lr[j].second)) st[i].first = lr[j].second;
					else st[i].first = lr[j].first;
				}
			}
		}
	}
	for(auto &a: ans) cout << a << endl;
}
