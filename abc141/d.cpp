#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
 int n,m;
 cin >> n >> m;
 priority_queue<ll> pq;
 for(int i=0;i<n;i++) {
	 ll a;
	 cin >> a;
	 pq.push(a);
 }
 for(int i=0;i<m;i++) {
	 ll tmp = pq.top();
	 pq.pop();
	 pq.push(tmp/2);
 }
 ll ans=0;
 for(int i=0;i<n;i++) {
	 ans += pq.top();
	 pq.pop();
 }
 cout <<ans << endl;
}
