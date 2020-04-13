#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
 * a<=x<=b
 * n-2この中から, a<= <=bを選ぶ
 * (b-a+1)

*/

int main(){
	ll n,a,b;
	cin >> n >> a >> b;
	if(b<a) {
		cout << 0 << endl;
		return 0;
	}
	ll left = (n-1)*a+b;
	ll right = a+(n-1)*b;
	if(right-left+1<=0) cout << 0 << endl;
	else cout << right-left+1 << endl;
}
