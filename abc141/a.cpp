#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	string a[] = {"Sunny", "Cloudy", "Rainy"};
	cin >> s;
	string ans;
	if(s ==a[0]) ans = a[1];
	if(s ==a[1]) ans = a[2];
	if(s ==a[2]) ans = a[0];
	cout << ans << endl;
}
