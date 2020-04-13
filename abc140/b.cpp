#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> a(n),b(n),c(n-1);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		a[i]--;
	}
	for(int i=0;i<n;i++)
		cin >> b[i];
	for(int i=0;i<n-1;i++)
		cin >> c[i];
	
	int ans = 0;
	for(int i=0;i<n;i++) {
		ans += b[a[i]];
		if(a[i]+1 == a[i+1]) {
			ans += c[a[i]];
		}
	}
	cout << ans << endl;
}
