#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	string s, ans = "";
	cin >> n >> s;
	for(int i=0;i<s.size();i++) {
		int tmp = s[i] - 'A';
		tmp += n;
		tmp %= 26;
		ans += char('A' + tmp);
	}
	cout << ans << endl;
}
