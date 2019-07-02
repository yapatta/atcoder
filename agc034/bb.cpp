#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
	string s;
	cin >> s;
	ll ans = 0, acount = 0;
	bool bflag = false, cflag = false;

	for(int i=0;i<s.size();i++) {
		if(s[i]=='A'){
			if(bflag) acount = 0;
			bflag = false;
			cflag = false;
			acount++;
		}
		if(s[i]=='B'){
			if(bflag) acount = 0;
			bflag = true;
			cflag = false;
		}
		if(s[i]=='C'){
			if(bflag) ans += acount;
			else acount = 0;
			bflag = false;
			cflag = true;
		}
	}


	cout << ans << endl;
}

