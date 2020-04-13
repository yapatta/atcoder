#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string m[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main() {
	string s;
	cin >> s;
	int ans;
	for(int i=0;i<7;i++) {
		if(s==m[i]) ans = i;
	}
	cout << 7-ans << endl;
}
