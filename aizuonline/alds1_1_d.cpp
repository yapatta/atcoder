#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> r(n);
	for (int i = 0; i < n; ++i)
		cin >> r[i];

	//最初の基準
	int max_m = r[1] - r[0];
	for (int i = 0; i < n-1; ++i)
	{
		int max = r[i+1] - r[i];
		for (int j = i+1; j < n; ++j)
		{
			if(max < r[j] - r[i])
				max = r[j] - r[i];
		}
		if(max_m < max)
			max_m = max;
	}
	cout << max_m << endl;

	return 0;
}