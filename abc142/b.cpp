#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> h(n);
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		cin >> h[i];
		if(k <= h[i]) cnt++;
	}
	cout << cnt << endl;
}
