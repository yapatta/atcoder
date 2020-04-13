#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	bool flag = true;
	if(s.size() % 2 == 0) {
		for(int i=0;i<s.size()-1;i+=2) {
			if(s[i] == 'h' and s[i+1] == 'i') {

			} else {
				flag = false;
			}
		}
	} else {
		flag = false;
	}

	cout << ((flag) ? "Yes" : "No") << endl;
}
