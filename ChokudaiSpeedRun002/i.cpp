#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll,pair<ll,ll>> battle(pair<ll,pair<ll,ll>> a, pair<ll,pair<ll,ll>> b) {
	ll left_num = (a.second.first%b.second.second==0)? a.second.first/b.second.second : a.second.first / b.second.second + 1;
	ll right_num = (b.second.first%a.second.second==0)? b.second.first/a.second.second : b.second.first / a.second.second + 1;
	if(left_num > right_num)
		return a;
	else if(left_num < right_num)
		return b;
	else
		return {-1,{0,0}};
}
int main(){
	 ll n;
	 cin >> n;
	 vector<pair<ll,pair<ll,ll>> > ab(n);
	 for(ll i=0;i<n;i++) 
	 {
		 ll a,b;
		 cin >> a >> b;
		 ab[i] = {i,{a,b}};
	 }

	 auto now = ab[0];
	 for(int i=1;i<n;i++) {
		 if(now.first == -1) {
			 now = ab[i];
			 continue;
		}
		now = battle(now,ab[i]);
	 }
	 if(now.first==-1) {
		 cout << -1 << endl;
		 return 0;
	 }

	 ll now_ori = now.first;
	 for(int i=0;i<n;i++) {
		 if(now.first == i) continue;
		 now = battle(now,ab[i]);
		 if(now.first == -1) {
			 cout << -1 << endl;
			 return 0;
		 }
	 }
	 cout << now_ori+1 << endl;
}
