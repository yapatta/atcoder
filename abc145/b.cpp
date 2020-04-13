#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	string s;
	cin >>n >> s;
	string a = s.substr(0, n/2);
	string b = s.substr(n/2);
	if(a == b) cout << "Yes" << endl;
	else cout << "No" << endl;
}
