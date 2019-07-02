#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define MAX 10

signed
main() {
		ll N;
		cin >> N;
		
		int ans = MAX;
		ll left, right;
		for(left=1;left*left<=N;left++)
		{
				if(N%left!=0) continue;

				right = N / left;
				string ls = to_string(left), rs = to_string(right);

				ans = min(ans, max((int)ls.size(), (int)rs.size()));

		}

		cout << ans << endl;
}
