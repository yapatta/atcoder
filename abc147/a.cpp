#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	int sum = a[0] + a[1] + a[2];
	if(sum >=22) cout << "bust" << endl;
	else cout << "win" << endl;
}
