#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	double a,b,x;
	cin >> a >> b >> x;
	if(a*a*b/2 <= x) {
			printf("%lf\n", atan(2*(a*a*b-x)/(a*a*a)) * 180 / M_PI);
	} else {
		if(a*a*b-2*x >= 0) {
			printf("%lf\n", atan((a*b*b)/(2*x)) * 180 / M_PI);
		} else {
			printf("%lf\n", atan((2*x)/(a*a*a)) * 180 / M_PI);
		}
	}
}
