#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	if(4*a*b < (c-a-b)*(c-a-b) and c-a-b>=0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
