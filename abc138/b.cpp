#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<double> a(n);
	double bunbo = 0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		bunbo += 1/a[i];
	}
	double ans = 1/bunbo;
	printf("%.7f\n", ans);
}
