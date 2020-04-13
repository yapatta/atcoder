#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> b(n);
	for(int i=0;i<n-1;i++)
		cin >> b[i];
	b[n-1] = 0;
	vector<int> a(n);
	a[0] = b[0];
	for(int i=1;i<n-1;i++) {
		if(b[i] >= b[i-1])
			a[i] = b[i-1];
		else
			a[i] = b[i];
	}
	a[n-1] = b[n-2];
	int sum = 0;
	for(int i=0;i<n;i++) {
		sum += a[i];
	}
	cout << sum << endl;
}
