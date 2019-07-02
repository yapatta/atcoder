#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int,int> > a;

	for(int i = 0;i < n;i++)
	{
		int s;
		cin >> s;
		a.push_back(make_pair(s,i+1));
	}

	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());

	for(int i = 0;i < n;i++)
		cout << a[i].second << endl;
    return 0;
}
