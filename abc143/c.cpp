#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	string s;
	cin >> n >> s;
	int ans = 1;
	char key = (char)s[0];
	for(int i=1;i<n;i++) {
		if(key != s[i]) {
			ans++;
			key = s[i];
		}
	}
	cout << ans << endl;
}
