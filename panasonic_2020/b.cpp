#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll H, W;
	cin >> H >> W;
	cout << (((W+1)/2) * ((H+1)/2)) + ((W/2) * (H/2)) << endl;
}
