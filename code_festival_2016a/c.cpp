#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s, ans;
int K;

char nextAL(char a) {
	char res;
	if(a=='z') res = 'a';
	else res = char(a+1);
	return res;
}

char afternAL(char a, int n) {
	char res;
	if(a+n <= 'z') res = char(a+n);
	else {
		int tmp = a + n - 'z';
		res += 'a' + tmp - 1;
	}
	return res;
}

int betweenAB(char a, char b) {
	if(b >= a) return (int)(b-a);
	return (int)('z'-a + b-'a'+1);
}

void input() {
	cin >> s >> K;
}

void solve() {
	ans = s;
	for(int i=0;i<s.size()-1;i++) {
		int now = betweenAB((char)s[i], 'a');
		if(now > K) {
			continue;
		}
		K -= now;
		ans[i] = 'a';
	}
	// 一桁目調整
	K %= 26;
	int n = (int)s.size();
	ans[n-1] = afternAL((char)ans[n-1], K);

	cout << ans << endl;
}

int main() {
	input();
	solve();
}
