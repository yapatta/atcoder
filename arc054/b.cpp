#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

ld P;

inline ld f(ld x) {
	return x + P * pow(0.5, x / 1.5);
}

int main() {
	cin >> P;
	// 現在P年
	// x年経ったら, x + P / 2^(x/1.5)(年)
	// f(x) = x + P / 2^(x/1.5) が最小となるようなx
	ld lb = 0, ub = P;
	for(int i=0;i<200;i++) {
		ld t1 = (2.0 * lb + ub) / 3.0;
		ld t2 = (lb + 2.0 * ub) / 3.0;

		if(f(t1) > f(t2)) lb = t1;
		else ub = t2;
	}
	cout << fixed << setprecision(10) << f(lb) << endl;
}
