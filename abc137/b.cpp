#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int k,x;
	cin >> k >> x;
	int ans = x - k + 1;
	for(int i=0;i<2*k-1;i++) {
		if(i!=0) cout << " ";
		cout << ans+i;
	}
	cout << endl;
}
