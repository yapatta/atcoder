#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	cin >> n;
	int ans = 1;
	for(int i=0;i<3;i++) {
		ans *= n;
	}
	cout << ans << endl;
}
