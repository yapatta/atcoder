#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	vector<int> a(N+1), b, now(N+1,0),ex(N+1,0);
	for(int i=1;i<=N;i++)
		cin >> a[i];

	for(int i=N;i>=1;i--)
	{
		for(int j=2*i;j<=N;j+=i)
			now[i] += ex[j];

		now[i] %= 2;
		if(a[i] != now[i])
		{
			b.push_back(i);
			ex[i] = 1;
			now[i] = (now[i]+1)%2;
		}
	}

	bool flag =true;
	for(int i=1;i<=N;i++)
	{
		if(a[i] != now[i])
		{
			flag = false;
			break;
		}
	}
	if(flag){
		cout << b.size() << endl;
		for(int i=b.size()-1;i>=0;i--)
			cout << b[i] << endl;
	}else{
		cout << -1 << endl;
	}
}
