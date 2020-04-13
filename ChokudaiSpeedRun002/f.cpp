#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<pair<ll,ll> > vec;
	for(int i=0;i<n;i++) {
		ll a,b;
		cin >> a >> b;
		if(a>b) {
			vec.push_back({b,a});
		}else {
			vec.push_back({a,b});
		}
	}
	sort(vec.begin(),vec.end());
	ll cnt = 0;
	vec.erase(unique(vec.begin(),vec.end()), vec.end());
	cout << vec.size() << endl;
}
