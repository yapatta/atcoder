#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template<class T> void insertionSort(vector<T>& X, int n, int g);
template<class T> void shellSort(vector<T>& X, int n);

int main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	shellSort(a, n);

	return 0;
}

template<class T> void insertionSort(vector<T>& X, int n, int g)
{
	for (int i = g; i < n; ++i)
	{
		int v = X[i];
		int j = i-g;
		while(j >= 0)
		{
			if(X[j] > v)
				swap(X[j], X[i]);
			v = X[j];
			j -= g;
		}
	}
	for (int i = 0; i < n-1; ++i)
		cout << X[i] << " ";
	cout << X[n-1] << endl;
}
template<class T> void shellSort(vector<T>& X, int n)
{
	int cnt = 0;
	//配列G = {1, 4, 13, 40, ...}を生成
	vector <int> G;
	for (int h = 1;;)
	{
		if(h > n) break;
		G.push_back(h);
		h = 3*h + 1;
	}
	for (int i = G.size()-1; i >= 0; --i)
		insertionSort(X, n, G[i]);
}