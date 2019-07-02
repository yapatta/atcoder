#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n,q,k = 0, top = 0, counter = 0;
	scanf("%d%d", n, q);
	vector<pair<string, int> > a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i].first >> a[i].second;
		scanf("%d%d", a[i].first, a[i].second);

	while(k < n)
	{
		if(a[top].second > q)
		{
			counter += q;
			a[top].second -= q;
			top = (top+1) % n;
		}else if(a[top].second == 0)
		{
			top = (top+1) % n;
			continue;
		}
		else
		{
			counter += a[top].second;
			a[top].second = 0;
			cout << a[top].first << " " << counter << endl;
			k++;
			top = (top+1) % n;
		}
	}

	return 0;
}