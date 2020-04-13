#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

int main(){
	ll K;
	cin >> K;
	queue<string> q;
	string ar[10] = {"1","2","3","4","5","6","7","8","9"};
	for(ll i=1;i<=9;i++) q.push(ar[i-1]);
	int cnt = 0;
	while(!q.empty()) {
		string bef = q.front();
		cnt++;
		if(cnt == K) {
			cout << bef << endl;
			return 0;
		}
		char tmp = bef[bef.size()-1];
		q.pop();
		if((char)(tmp-1) >= '0') q.push(bef+(char)(tmp-1));
		q.push(bef+tmp);
		if((char)(tmp+1) <= '9') q.push(bef+(char)(tmp+1));
	}
}
