#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	int n;
	cin >> n;
	vector<int> p(n);
	for(int i=0;i<n;i++) cin >> p[i];

	int cnt = 0;
	for(int x=0;x<n-2;x++){
		if(p[x] < p[x+1] and p[x+1] < p[x+2]) {
			cnt++;
		}else if(p[x] > p[x+1] and p[x+1] > p[x+2])
		{
			cnt++;
		}
	}
	cout << cnt << endl;
}
