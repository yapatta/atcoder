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
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int j = 0; j < n-1; ++j)
			cout << a[j] << " ";
	cout << a[n-1] << endl;


	for (int i = 1; i < n; ++i)
	{
		int at = a[i];
		//atがa[j](0 <= j <= i-1)より大きくなんなかったときはatの位置は変わらない
		int j = i-1;
		while(j >= 0 && at < a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = at;

		for (int k = 0; k < n-1; ++k)
			cout << a[k] << " ";
		cout << a[n-1] << endl;
	}

	return 0;
}