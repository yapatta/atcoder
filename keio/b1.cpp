#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector<int> num(n);
	vector<int> s(k);
	for (int i = 0; i < n; ++i)
		cin >> num[i];
	for (int i = 0;i+k-1 < n; ++i)
	{
		int x = abs(num[i+k-1]) + abs(num[i+k-1]-num[i]);
		int y = abs(num[i]) + abs(num[i+k-1]-num[i]);
		s[i] = (x<=y)?x:y;

	}
	int f = s[0];
	for (int i = 1;i+k-1 < n; ++i)
	{
		if(f > s[i])
			f = s[i];
	}
	cout << f << endl;
	return 0;
}