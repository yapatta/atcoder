#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s;
	cin >> s;
	int ans = 0;
	for(int i=0;i<3;i++) {
		int num = s[i] - '0';
		if(0 <= num and num <= 9)
			ans += 2 * num * pow(10, 2-i);
		else {
			cout << "error" << endl;
			return 0;
		}
	}
	cout << ans << endl;

}
