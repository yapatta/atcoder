#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	int cnt  = 0;
	for(int i=0;i<s.size();i++) {
		if(i > s.size()-1-i)
		if(s[i] != s[s.size()-1-i]) cnt++;
	}
	cout << cnt << endl;
}
