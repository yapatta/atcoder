#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	bool flag1 = true, flag2 = true;
	for(int i=0;i<s.size();i++) {
		if(i%2==0) {
			if(!(s[i]=='R' || s[i]=='U' || s[i]=='D') ) {
				flag1 = false;
			}
	}else{
			if(!(s[i]=='L' || s[i]=='U' || s[i]=='D') ) {
				flag2 = false;
			}
		}
	}
	if(flag1 and flag2) cout << "Yes" << endl;
	else cout << "No" << endl;
}
