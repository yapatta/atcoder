#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

signed
main(){
		int N;
		cin >> N;
		vector<int> a(N), is_same(N);

		for(int i=0;i<N;i++)
				cin >> a[i];

		for(int l=0;l<=N-1;l++)
		{
				int r = (N - 1) - l;
				is_same[l] = abs(l-r);
		}

		sort(a.begin(), a.end());
		sort(is_same.begin(), is_same.end());

		bool flag = true;
		for(int i=0;i<N;i++)
		{
				if(a[i]!=is_same[i])
				{
						flag = false;
						break;
				}
		}

		if(!flag)
		{
				cout << 0 << endl;
				return 0;
		}

		ll ans = 1;
		int key = N / 2;
		for(int i=0;i<key;i++)
		{
				ans *= 2;
				ans %= MOD;
		}
		cout << ans << endl;
}
