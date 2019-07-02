#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
		string s;
		cin >> s;
		int n = s.size();
		
		ll ans = 0;
		for(int i=0;i<n;i++)
		{
				if(s[i]=='U')
				{
						ans += (n-(i+1));
						ans += 2*i;
						
				}else
				{
						ans += i;
						ans += 2*(n-(i+1));
				}
		}
		cout << ans << endl;
}
