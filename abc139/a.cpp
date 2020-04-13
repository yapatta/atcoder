#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s,t;
	int cnt = 0;
	cin >> s >> t;
	for(int i=0;i<3;i++) {
		if(s[i] == t[i])
			cnt++;
	}
	cout << cnt << endl;
}
