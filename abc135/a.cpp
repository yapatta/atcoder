#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a,b;
	cin >> a >> b;
	if((a+b)%2==0) cout << llabs(a+b)/2 << endl;
 	else cout << "IMPOSSIBLE" << endl;
}
