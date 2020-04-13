#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	bool flag = false;
	for(int i=1;i*i<=n;i++) {
		if(n%i==0) {
			if(1<=i and i <= 9 and 1<=(n/i) and (n/i)<=9) flag = true;
		}
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}
