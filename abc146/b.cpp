#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	string s;
	cin >> n >> s;
	string ans = "";
	for(int i=0;i<s.size();i++) {
		if(65 <= s[i] && s[i] <= 90) {
			int tmp = (((char)s[i] - 'A') + n) % 26;
			ans += (char)('A' + tmp);
		}else {
			int tmp = (((char)s[i] - 'a') + n) % 26;
			ans += (char)('a' + tmp);
		}
	}
	cout << ans << endl;
}
