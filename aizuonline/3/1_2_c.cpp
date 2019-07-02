#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void bubbleSort(string x[], int n);
void selectionSort(string x[], int n);
void stableOr(string x[],string y[], int n);

int main(void)
{
	int n;
	cin >> n;
	string a[36],b[36];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	bubbleSort(a, n);
	cout << "Stable" << endl;
	selectionSort(b, n);
	stableOr(a, b, n);

	return 0;
}

void bubbleSort(string x[], int n)
{
	//バブルソート
	for (int i = n-1; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(x[j][1] > x[j+1][1])
				x[j].swap(x[j+1]);
		}
	}
	for (int i = 0; i < n-1; ++i)
		cout << x[i] << " ";
	cout << x[n-1] << endl;
}
void selectionSort(string x[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		string min_s = x[i];
		int min = i;
		for (int j = i+1; j < n; ++j)
		{
			if(min_s[1] > x[j][1])
			{
				min = j;
				min_s = x[j];
			}
		}
		if(min != i)
			x[i].swap(x[min]);
	}
	for (int i = 0; i < n-1; ++i)
		cout << x[i] << " ";
	cout << x[n-1] << endl;
}
void stableOr(string x[], string y[], int n)
{
	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		if(x[i] != y[i])
		{
			flag = false;
			break;
		}
	}
	if(flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
}