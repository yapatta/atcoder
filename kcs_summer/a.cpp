#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int ans;
	if(b<=c or d<=a) {
		ans = 0;
	}else {
		ans = min(b,d) - max(a,c);
	}
	cout << ans << endl;
}
