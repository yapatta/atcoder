#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> p(n),cor(n);
	for(int i=0;i<n;i++)
	{
		cor[i] = i+1;
		cin >> p[i];
	}
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(cor[i] == p[i])
			cnt++;
	}
	if(cnt+2==n || cnt==n) cout << "YES" << endl;
	else cout << "NO" << endl;
}
