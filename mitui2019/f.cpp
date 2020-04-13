#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t1, t2;
	ll a1, a2, b1, b2;
	cin >> t1 >> t2 >> a1 >> a2 >> b1 >> b2;
	if(t1*a1+t2*a2 == t1*b1+t2*b2) {
		cout << "infinity" << endl;
		return 0;
	}

}
