#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector<int> num(n), minus;
	for (int i = 0; i < n; ++i)
		cin >> num[i];

	int mis = 0;
	while(num[mis] < 0)
	{
		minus.push_back(num[mis]);
		mis++;
	}
	reverse(minus.begin(),minus.end());
	int plu = n-mis;
	vector<int> plus(plu);
	for (int i = mis; i < n; ++i)
		plus[i-mis] = num[i];

	vector<int> p(n);
	cout << plu << " " << mis << endl;
	int s = (plu<mis)?plu:mis;
	int j = 0;
	for (int i = 0; i < plu; ++i)
	{
		if(k-i-2 < minus.size())
		{
			p[j] = plus[i];
			p[j] -= minus[k-i-2];
			j++;
		}
	}
	for (int i = 0; i < mis; ++i)
	{
		if(k-i-2 < plus.size())
		{
			p[j] = -minus[i];
			p[j] += plus[k-i-2];
			j++;
		}
	}
	sort(p.begin(), p.end());

	for (int i = 0; i < p.size(); ++i)
	{
		cout << p[i] << endl;
	}

	return 0;
}
