#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	cout << ((b > a*n)? a*n : b) << endl;
}
