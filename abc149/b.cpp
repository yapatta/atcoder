#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll A, B, K;
	cin >> A >> B >> K;
	ll a, b;
	a = max(0LL, A - K);
	// A - a枚残っている
	K -= (A - a);
	b = max(0LL, B - K);
	cout << a << " " << b << endl;
}
