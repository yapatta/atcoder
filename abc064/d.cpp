#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int left = 0, right = 0;
	for(int i=0;i<n;i++) {
		if(left > 0 and s[i] == ')') left--;
		else if(s[i] == '(') left++;
		else right++;
	}
	string ans = s;
	for(int i=0;i<right;i++) ans = '(' + ans;
	for(int i=0;i<left;i++) ans = ans + ')';
	cout << ans << endl;
}
