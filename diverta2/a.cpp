#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed
main(){
	int n,k;
	cin >> n >> k;
	if(k>1)
		cout << (n-k+1) - 1 << endl;
	else
		cout << 0 << endl;
}
