#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
		int N;
		cin >> N;
		vector<int> w(N);
		for(int i=0;i<N;i++)
				cin >> w[i];

		
		int ans = 100000;
		int left, right;
		for(int lmax=0;lmax<=N;lmax++)
		{
				left = 0, right = 0;
				for(int i=0;i<lmax;i++)
				{
						left += w[i];
				}
				for(int i=lmax;i<N;i++)
				{
						right += w[i];
				}
				ans = min(ans, abs(left-right));
		}
		cout << ans << endl;
}
