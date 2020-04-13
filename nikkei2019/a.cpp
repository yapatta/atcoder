#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	for(int i=1;i+i<=n;i++) {
		if(i != n-i) cnt++;
	}
	cout << cnt << endl;
}
