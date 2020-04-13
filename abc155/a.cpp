#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	if((a[0]==a[1] && a[1] != a[2]) or (a[0] != a[1] && a[1]==a[2])) cout << "Yes" << endl;
	else cout << "No" << endl;
}
