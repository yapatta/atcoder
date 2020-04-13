#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	int k;
	if(n%2==0) {
		k = n/2;
	}else {
		k = n/2+1;
	}
	printf("%.6f\n", (double)k/n);
}
