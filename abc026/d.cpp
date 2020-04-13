#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define EPS (1e-6)
#define equals(a, b) (fabs((a) - (b)) <= EPS )

double A, B, C;

double f(double t) {
	return A * t + B * sin(C * t * M_PI);
}

int main() {
	cin >> A >> B >> C;
	double low = 0.0, high = 101.0;
	for(int i=0;i<1000000;i++) {
		double mid = (low + high) / 2.0;
		if(f(mid) <= 100) low = mid;
		else high = mid;
	}
	cout << fixed << setprecision(20) << low << endl;
}
