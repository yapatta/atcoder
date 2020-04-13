#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	string left = s.substr(0, (n-1)/2);
	string right = s.substr((n+3) / 2 - 1);
	string ss = s;
	string l = left;
	string r = right;
	reverse(ss.begin(), ss.end());
	reverse(l.begin(), l.end());
	reverse(r.begin(), r.end());
	if(ss == s and l == left and r == right) cout << "Yes" << endl;
	else cout << "No" << endl;
}
