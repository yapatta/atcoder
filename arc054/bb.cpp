#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double P;

double f(double x) {
	return x + P / pow(2, 2*x / 3.0);
}

int main() {
	cin >> P;
	// 現在P年
	// x年経ったら, x + P / 2^(x/1.5)(年)
	// f(x) = x + P / 2^(x/1.5) が最小となるようなx
	cout << (2.0*log(2)/3.0) * (log(3.0*log(2)*P/2.0) + 1) << endl;
}
