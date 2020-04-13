#include <bits/stdc++.h>
#define MAX_N 100005
using namespace std;
/*
 * min(r, n-r)の最大値を求めればいい
 * このとき, nはaの最大値
*/
int n;
int a[MAX_N];
int main() {
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	sort(a, a+n);
	int left = a[n-1], right = min(a[0], left - a[0]);
	for(int i=0;i<n-1;i++) {
		int tmp = min(a[i], left - a[i]);
		if(tmp > right)
			right = a[i];
	}
	cout << left << " " << right << endl;
}
