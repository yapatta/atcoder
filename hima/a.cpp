#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
	a,b,c
偶数のとき: 
max: 2a+2b+2c	b+c, a+c, a+b
max: 4a+4b+4c	2a+b+c, a+2b+c, a+b+2c
max: 8a+8b+8c	2a+3b+3c, 3a+2b+3c, 3a+3b+2c
max: 16a+16b+16c	6a+5b+5c, 5a+6b+5c, 5a+5b+6c

k: 偶数
b-a
a-b
b-a


*/

int main(){
	ll a,b,c,k;
	cin >> a >> b >> c >> k;
	if(k%2==0) cout << (a-b) << endl;
	else cout << (b-a) << endl;
}
